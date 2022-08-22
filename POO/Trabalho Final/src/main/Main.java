package main;

import view.MovieScreen;
import view.SearchScreen;

public class Main {
    public static SearchScreen searchScrn;
    public static MovieScreen movieScrn;

    public static void main(String[] args){
        searchScrn = new SearchScreen();
        searchScrn.setVisible(true);

        movieScrn = new MovieScreen();
    }

    public static void navegateToSearchPage() {
        movieScrn.setVisible(false);
        searchScrn.clean();
        searchScrn.setVisible(true);

    }

    public static void navegateToMoviePage() {
        searchScrn.setVisible(false);
        movieScrn.setVisible(true);
    }
}