public class Inversor {
    // O código estava errado por que os dois  Arrays precisam ter o mesmo tamanho,
    // invertido era menor que letras e por isso resultava num exception out of bounds
    public static String inverterString(String texto) {
        char []letras = texto.toCharArray();
        char []invertido = new char[letras.length];

        int index = letras.length - 1;
        for(char letra : letras) {
            invertido[index] = letra;
            index--;
        }
        return new String(invertido);
    }
}