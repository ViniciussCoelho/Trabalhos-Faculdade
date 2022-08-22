import java.util.Random;

public class MatrixGenerator {
    private int line;
    private int column;

    public int[][] generateMatrix(int line, int column) {
        Random rd = new Random();
        this.line = line;
        this.column = column;

        int[][] matrix = new int[line][column];

        for(int i = 0; i < line; i++) {
            for(int j = 0; j < column; j++) {
                matrix[i][j] = rd.nextInt(100);
            }
        }
        return matrix;
    }

    public int[][] transposeMatrix(int[][] m) {
        int[][] transposed = new int[column][line];
        for(int i =0; i < column; i++){
            for(int j = 0; j < line; j++){
                if(j > i || j < i) transposed[i][j] = m[j][i];
                if(j == i) transposed[i][j]= m[i][j];
            }
        }
        return transposed;
    }

    public int[][] sumMatrix(int[][] a, int[][] b) {
        int[][] matrix = new int[line][column];
        for(int i = 0; i < line; i++) {
            for(int j = 0; j < column; j++) {
                matrix[i][j] = a[i][j] + b[i][j];
            }
        }
        return matrix;
    }

    public void outputMatrix(int[][] m) {
        for(int i = 0; i < m.length; i++) {
            for(int j = 0; j < m[0].length; j++) {
                System.out.print(m[i][j]+"\t");
            }
            System.out.println();
        }
    }
}
