// a) caso temp seja null, vai gerar uma exception dizendo que
// o método toCharArray não pode ser invocado, pois o parâmetro "texto" é nulo.

// b) Se a string for "professor", o programa inverterá a string ficando "rosseforp".

public class Main {
    public static void main(String[] args) {
        String temp = "professor";

        temp = Inversor.inverterString(temp);
        System.out.println(temp);
    }
}
