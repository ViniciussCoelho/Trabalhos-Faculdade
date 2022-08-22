import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String text;
        int input;

        System.out.println("Digite um texto: ");
        text = scanner.nextLine();

        do {
            System.out.println("Digite o número da opção desejada:\n1.Remover vogais\n2.Remover consoantes");
            input = scanner.nextInt();
        }while(input != 1 && input !=2);

        RemoveCharacters textRemover = new RemoveCharacters();
        text = textRemover.getNewString(input, text);

        System.out.print("Sequência: " + text);
    }
}
