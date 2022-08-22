import java.util.Scanner;
import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n;

        System.out.println("Quantas posições terão os vetores: ");
        n = scanner.nextInt();

        int[] a = new int[n];
        int[] b = new int[n];

        for(int i = 0; i < n; i++) {
            System.out.printf("Informe o %d valor do primeiro vetor: ", (i+1));
            a[i] = scanner.nextInt();
        }

        for(int i = 0; i < n; i++) {
            System.out.printf("Informe o %d valor do segundo vetor: ", (i+1));
            b[i] = scanner.nextInt();
        }

        VectorCalculator vectorMix = new VectorCalculator();

        System.out.print("Intersecção: ");
        System.out.println(Arrays.toString(vectorMix.intersection(a, b)));
        System.out.print("União: ");
        System.out.println(Arrays.toString(vectorMix.unity(a, b)));
        System.out.print("Soma: ");
        System.out.println(Arrays.toString(vectorMix.sum(a, b)));
        System.out.print("Subtração (a - b): ");
        System.out.println(Arrays.toString(vectorMix.subtraction(a, b)));
        System.out.print("Subtração (b - a): ");
        System.out.println(Arrays.toString(vectorMix.reverseSub(a, b)));

    }
}
