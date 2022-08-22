package model;

import client.ImageClient;
import client.ImageClientListener;
import client.OmdbClient;
import client.OmdbClientListener;
import com.google.gson.JsonElement;
import com.google.gson.JsonObject;
import com.google.gson.JsonParser;

import java.awt.*;

public class MovieData implements OmdbClientListener, ImageClientListener {
    private OmdbClient omdbClient;
    private ImageClient imageClient;
    private Movie movie;
    private MovieListener movieListener;

    public MovieData() {
        omdbClient = new OmdbClient();
        imageClient = new ImageClient();
        omdbClient.setListener(this);
        imageClient.setListener(this);
    }

    public void setMovieListener(MovieListener movieListener) {
        this.movieListener = movieListener;
    }


    public void requestMovieData(String query) {
        omdbClient.searchMovieByTitle(query);
    }

    public void toMovieObject(String movieData) {
        JsonParser parser = new JsonParser();
        JsonElement element = parser.parse(movieData);
        JsonObject jsonObject = element.getAsJsonObject();
        movie = new Movie();
        if(this.movieListener != null && jsonObject.get("Title") != null) {
            movie.title = jsonObject.get("Title").getAsString();
            movie.summary = jsonObject.get("Plot").getAsString();
            movie.releaseDate = jsonObject.get("Released").getAsString();
            movie.runtime = jsonObject.get("Runtime").getAsString();
            movie.genre = jsonObject.get("Genre").getAsString();
            String imgUrl = jsonObject.get("Poster").getAsString();
            imageClient.getImage(imgUrl);
        } else {
            System.out.println("tested");
            movie.title = "Filme não encontrado.";
        }
    }

    public void imageLoaded(Image img) {
        movie.image = img;
        if(movieListener != null) {
            movieListener.setMovieData(movie);
        }
    }
}
