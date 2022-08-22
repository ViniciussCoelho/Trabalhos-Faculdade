import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String text;

        do {
            System.out.println("Digite um texto contendo apenas letra maiusculas: ");
             text = scanner.nextLine();
        } while(!text.matches("[A-Z]"));

        System.out.println("Digite um valor: ");
        int n = scanner.nextInt();

        CaesarCipher encrypt = new CaesarCipher();

        String newText = encrypt.getCipherText(text, n);
        System.out.println("Seu texto criptografado: " + newText);
    }
}