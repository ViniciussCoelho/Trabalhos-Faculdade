import java.util.List;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int a, b;

        System.out.println("Digite um número: ");
        a = scanner.nextInt();

        System.out.println("Digite outro número: ");
        b = scanner.nextInt();

        PrimeNum prime = new PrimeNum();
        List<Integer> primeList = prime.getPrimeNumbers(a, b);

        System.out.println("Números primos entre " + a + " e " + b + ": ");

        for(Integer i : primeList) {
            System.out.println(i);
        }
    }
}
