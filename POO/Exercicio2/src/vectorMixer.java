public class vectorMixer {
    private int[] vector = new int[10];

    public int[] getVectorNumbers(int[] v, int[] u) {
        for(int i = 0; i < 10; i++) {
            if (v[i] % 2 == 0 && u[i] % 2 == 0) {
                vector[i] = v[i] + u[i];
            }
            else if(v[i] % 2 != 0 && u[i] % 2 != 0) {
                vector[i] = v[i] - u[i];
            }
            else {
                vector[i] = v[i] * u[i];
            }
        }
        return vector;
    }
}

