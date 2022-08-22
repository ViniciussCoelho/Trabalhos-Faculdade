import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class HomeScreen extends JFrame implements ActionListener {
    private int value = 0;
    public HomeScreen() {
        setLayout(new GridLayout(3, 1));
        setTitle("Conta-Tudo 3000");
        setSize(400, 600);
        JLabel lb = new JLabel(String.valueOf(value), SwingConstants.CENTER);
        JButton b1 = new JButton("BOTAO#1");
        JButton b2 = new JButton("BOTAO#2");
        lb.setFont(new Font("Arial", Font.BOLD, 50 ));
        b1.setFont(new Font("Arial", Font.BOLD, 20 ));
        b2.setFont(new Font("Arial", Font.BOLD, 20 ));
        b1.addActionListener(e -> {
            System.out.println("Botão 1 pressionado");
            value++;
            lb.setText(String.valueOf(value));
        });
        b2.addActionListener(e -> {
            System.out.println("Botão 2 pressionado");
            value--;
            lb.setText(String.valueOf(value));
        });
        add(lb);
        add(b1);
        add(b2);
        setDefaultCloseOperation(EXIT_ON_CLOSE);
    }

    @Override
    public void actionPerformed(ActionEvent e) { }
}