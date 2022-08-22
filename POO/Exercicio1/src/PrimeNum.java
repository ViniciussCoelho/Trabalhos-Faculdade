import java.util.ArrayList;

public class PrimeNum {
    public ArrayList<Integer> getPrimeNumbers(int start, int end) {
        ArrayList<Integer> primeList = new ArrayList<>();

        for(int i = start; i <= end; i++) {
            if(isPrime(i)) {
                primeList.add(i);
            }
        }
        return primeList;
    }

    private boolean isPrime(int number) {
        if(number <= 1) return false;

        for(int i = 2; i <= Math.sqrt(number); i++) {
            if(number % i == 0) return false;
        }
        return true;
    }
}
