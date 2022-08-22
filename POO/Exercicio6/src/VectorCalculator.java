import java.util.ArrayList;

public class VectorCalculator {
    public int[] intersection(int[] a, int[] b) {
        ArrayList<Integer> list = new ArrayList<>();

        for(int i = 0; i < a.length; i++) {
            for(int j = 0; j < a.length; j++) {
                if (a[i] == b[j]) {
                    list.add(a[i]);
                }
            }
        }
        return listToVector(list);
    }

    public int[] unity(int[] a, int[] b) {
        ArrayList<Integer> list = new ArrayList<>();

        for(int i = 0; i < a.length; i++) {
            list.add(a[i]);
        }
        for(int i = 0; i < a.length; i++) {
            if (!list.contains(b[i])) {
                list.add(b[i]);
            }
        }
        return listToVector(list);
    }

    public int[] sum(int[] a, int[] b) {
        ArrayList<Integer> list = new ArrayList<>();

        for(int i = 0; i < a.length; i++) {
            list.add(a[i] + b[i]);
        }
        return listToVector(list);
    }

    public int[] subtraction(int[] a, int[] b) {
        ArrayList<Integer> list = new ArrayList<>();

        for(int i = 0; i < a.length; i++) {
            list.add(a[i] - b[i]);
        }
        return listToVector(list);
    }

    public int[] reverseSub(int[] a, int[] b) {
        ArrayList<Integer> list = new ArrayList<>();

        for(int i = 0; i < a.length; i++) {
            list.add(b[i] - a[i]);
        }
        return listToVector(list);
    }

    private int[] listToVector(ArrayList<Integer> list) {
        int[] vector = new int[list.size()];
        int index = 0;

        for(Integer i : list) {
            vector[index] = i;
            index++;
        }
        return vector;
    }
}
