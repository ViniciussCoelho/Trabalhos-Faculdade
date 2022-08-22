package client;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.net.HttpURLConnection;
import java.net.MalformedURLException;
import java.net.URL;

public class OmdbClient {
    private OmdbClientListener listener;
    private String movieTitle;
    String SEARCH_URL = "http://www.omdbapi.com/?t=TITLE&apikey=APIKEY";

    private Runnable runnable = new Runnable() {
        @Override
        public void run() {
            if(movieTitle != null) {
                String movieData = searchResult(movieTitle);
                if(listener != null) {
                    listener.toMovieObject(movieData);
                }
            }
        }
    };


    public OmdbClient() {
        movieTitle = null;
    }

    public void setListener(OmdbClientListener listener) {
            this.listener = listener;
    }

    public String sendGetRequest(String requestUrl) {
        StringBuilder response = new StringBuilder();

        try {
            URL url = new URL(requestUrl);
            HttpURLConnection connection = (HttpURLConnection) url.openConnection();
            connection.setRequestMethod("GET");
            connection.setRequestProperty("Accept", "*/*");
            connection.setRequestProperty("Content-Type", "application/json; charset=UTF-8");
            InputStream stream = connection.getInputStream();
            InputStreamReader reader = new InputStreamReader(stream);
            BufferedReader buffer = new BufferedReader(reader);
            String line;
            while((line = buffer.readLine()) != null) {
                response.append(line);
            }
            buffer.close();
            connection.disconnect();
        } catch (MalformedURLException e) {
            e.printStackTrace();
        } catch (IOException e) {
            e.printStackTrace();
        }

        return response.toString();
    }

    public void searchMovieByTitle(String movieTitle) {
        this.movieTitle = movieTitle;
        (new Thread(runnable)).start();
    }

    public String searchResult(String movieTitle) {
        movieTitle = movieTitle.replaceAll(" +", "+");
        String requestUrl = SEARCH_URL.replaceAll("TITLE", movieTitle).replaceAll("APIKEY", "61b2900b");

        return sendGetRequest(requestUrl);
    }
}
