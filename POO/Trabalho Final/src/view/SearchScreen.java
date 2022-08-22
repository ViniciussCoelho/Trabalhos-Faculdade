package view;

import client.ImageClient;
import main.Main;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.IOException;
import java.util.Objects;

public class SearchScreen extends JFrame implements ActionListener {
    JTextField inputText;
    JLabel image;

    public SearchScreen() {
        setSize(420, 450);
        setDefaultCloseOperation(EXIT_ON_CLOSE);
        initComponents();
    }

    private void initComponents() {
        setLayout(new GridBagLayout());
        GridBagConstraints c = new GridBagConstraints();
        ImageClient imgClient = new ImageClient();

        setTitle("MovieSearch");

        c.insets = new Insets(10,0,0,0);
        c.anchor = GridBagConstraints.CENTER;
        c.weightx = 0.5;
        c.gridx = 0;
        c.gridy = 0;
        c.gridwidth = 2;

        try {
            add(image = new JLabel(), c);
            image.setIcon(new ImageIcon(imgClient.getImgFromUrl("https://i.imgur.com/empctrw.png")));
        }
        catch (IOException e) {
            e.printStackTrace();
        }

        c.ipadx = 390;
        c.ipady = 40;
        c.gridy = 1;

        inputText = new JTextField();
        add(inputText, c);

        JButton clearButton = new JButton("Limpar");
        c.gridwidth = 1;
        c.gridy = 2;
        c.ipady = 20;
        c.ipadx = 73;
        add(clearButton, c);
        clearButton.addActionListener(e -> clean());

        JButton searchButton = new JButton("Pesquisar");
        c.ipadx = 50;
        c.gridx = 1;
        add(searchButton, c);
        searchButton.addActionListener(this);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        if(!Objects.equals(inputText.getText(), "")) {
            Main.movieScrn.returnMovieData().requestMovieData(inputText.getText());
            Main.navegateToMoviePage();
        }
    }

    public void clean() {
        inputText.setText("");
    }
}