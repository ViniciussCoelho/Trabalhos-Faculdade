public class MatrixCombinator {
    public int[][] getCMatrix(int[][] a, int[][] b, int m) {
        int[][] matrix = new int[m][m];
        int cont = 0;

        for (int i = 0; i < m; i++) {
            System.arraycopy(a[i], 0, matrix[i], 0, m);
        }

        for (int i = 1; i < m; i++) {
            cont++;
            if (cont >= 0) System.arraycopy(b[i], 0, matrix[i], 0, cont);
        }
        return matrix;
    }

    public void outputMatrix(int[][] m) {
        for (int[] ints : m) {
            for (int j = 0; j < m[0].length; j++) {
                System.out.print(ints[j] + "\t");
            }
            System.out.println();
        }
    }
}