import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String convertedN = "";

        System.out.println("Digite a operação desejada:\n1.Converter para binário\n2.Converter para hexadecimal\n");
        int n = scanner.nextInt();

        System.out.println("Digite um número");
        int decimal = scanner.nextInt();

        baseConverter converter = new baseConverter();

        switch (n) {
            case 1 -> convertedN = converter.toBinary(decimal);
            case 2 -> convertedN = converter.toHex(decimal);
            default -> System.out.println("Essa opção não existe, tente novamente.");
        }

        System.out.print("Seu número convertido: " + convertedN);
    }
}