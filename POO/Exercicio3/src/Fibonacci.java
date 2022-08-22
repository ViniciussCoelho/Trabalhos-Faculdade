import java.util.ArrayList;

public class Fibonacci {
    private int total;

    public ArrayList<Integer> getFiboNumbers(int n) {
        int aux = 0;
        ArrayList<Integer> fiboList = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            aux = fibo(i);
            total += aux;
            fiboList.add(aux);
        }
        return fiboList;
    }

    private int fibo(int n) {
        if (n == 0) return 0;

        if (n == 1) return 1;

        return fibo(n - 1) + fibo(n - 2);
    }

    public int getTotal() {
        return total;
    }
}
