import java.util.Scanner;
import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = 10;
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

        vectorMixer vectorMix = new vectorMixer();

        int[] vector = vectorMix.getVectorNumbers(a, b);
        Arrays.sort(vector);

        System.out.print("Vetor gerado: ");
        System.out.println(Arrays.toString(vector));
    }
}
