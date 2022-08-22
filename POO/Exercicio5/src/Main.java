import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int m, n;
        System.out.println("Digite o número de linhas da matriz: ");
        m = scanner.nextInt();

        // impede a matriz de ser quadrada
        do {
            System.out.println("Digite o número de colunas da matriz: ");
            n = scanner.nextInt();
        }while(n == m);

        MatrixGenerator matrixGen = new MatrixGenerator();

        int[][] matrixA = matrixGen.generateMatrix(m, n);
        int[][] matrixB = matrixGen.generateMatrix(m, n);
        int[][] matrixC = matrixGen.sumMatrix(matrixA, matrixB);
        int[][] transposedC = matrixGen.transposeMatrix(matrixC);

        System.out.println("Matriz A: ");
        matrixGen.outputMatrix(matrixA);

        System.out.println("Matriz B: ");
        matrixGen.outputMatrix(matrixB);

        System.out.println("Matriz C: ");
        matrixGen.outputMatrix(matrixC);

        System.out.println("Matriz C transposta: ");
        matrixGen.outputMatrix(transposedC);
    }
}
