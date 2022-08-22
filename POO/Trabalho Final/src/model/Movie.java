package model;

import java.awt.*;

public class Movie {
    public String title;
    public String summary;
    public String releaseDate;
    public String runtime;
    public String genre;
    public Image image;

    public String toString() {
        return "<html>" + title + "<br/>" + releaseDate + "<br/>" + genre
                + "<br/>" + runtime + "<br/>" + summary + "</html>";
    }
}