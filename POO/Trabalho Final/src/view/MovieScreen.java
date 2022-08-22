package view;

import main.Main;
import model.Movie;
import model.MovieData;
import model.MovieListener;

import javax.swing.*;
import java.awt.*;

public class MovieScreen extends JFrame implements MovieListener {
    JLabel text;
    JLabel image;
    private MovieData movieData = new MovieData();
    public MovieData returnMovieData() {
        return movieData;
    }

    public MovieScreen() {
        movieData.setMovieListener(this);
        setSize(400, 650);
        setDefaultCloseOperation(EXIT_ON_CLOSE);
        initComponents();
    }

    private void initComponents() {
        setLayout(new GridBagLayout());
        GridBagConstraints c = new GridBagConstraints();
        setTitle("MovieSearch");

        c.insets = new Insets(10,0,0,0);
        c.anchor = GridBagConstraints.CENTER;
        c.weightx = 0.5;
        c.gridx = 0;
        c.gridy = 0;
        add(image = new JLabel(), c);

        c.gridy = 1;
        c.ipadx = 200;
        c.ipady = 50;
        text = new JLabel();
        text.setName("Dados do Filme");
        text.setFont(new Font("Serif", Font.BOLD, 12));
        add(text, c);

        c.gridy = 2;
        c.ipady = 20;
        c.ipadx = 73;
        JButton backButton = new JButton("Voltar");
        add(backButton, c);
        backButton.addActionListener(e -> {
            Main.navegateToSearchPage();
            text.setText("");
            image.setIcon(null);
        });
    }

    public void setMovieData(Movie movie) {
        text.setText(movie.toString());
        image.setIcon(new ImageIcon(movie.image.getScaledInstance(200, 300,  java.awt.Image.SCALE_SMOOTH)));
    }
}