import java.util.List;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n;

        System.out.println("Quantos números da série de Fibonacci você quer?: ");
        n = scanner.nextInt();

        Fibonacci fibo = new Fibonacci();
        List<Integer> fibonacciList = fibo.getFiboNumbers(n);

        System.out.println("Total: " + fibo.getTotal());

        System.out.print("Sequência: ");
        for(Integer i : fibonacciList) {
            System.out.print(i + " ");
        }
    }
}
