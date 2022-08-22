import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int m;

        System.out.println("Digite o tamanho da matriz quadrada: ");
        m = scanner.nextInt();

        int[][] matrixA = new int[m][m];
        int[][] matrixB = new int[m][m];


        System.out.println("Digite os elementos da primera matriz.");
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < m; j++) {
                System.out.println("Digite o elemento[" + i + "][" + j + "]: ");
                matrixA[i][j] = scanner.nextInt();
            }
        }

        System.out.println("Digite os elementos da segunda matriz.");
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < m; j++) {
                System.out.println("Digite o elemento[" + i + "][" + j + "]: ");
                matrixB[i][j] = scanner.nextInt();
            }
        }

        MatrixCombinator matrixCom = new MatrixCombinator();

        int[][] matrixC = matrixCom.getCMatrix(matrixA, matrixB, m);

        System.out.println("Matriz A: ");
        matrixCom.outputMatrix(matrixA);
        System.out.println("Matriz B: ");
        matrixCom.outputMatrix(matrixB);
        System.out.println("Matriz C: ");
        matrixCom.outputMatrix(matrixC);
    }
}
