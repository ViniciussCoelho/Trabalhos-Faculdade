// Não coloquei inputs no código para facilitar os testes ;)

public class Main {
    public static void main(String[] args) {
        double lados = 10;

        Quadrado quadrado = new Quadrado(lados);
        Cubo cubo = new Cubo(lados);

        System.out.println("Quadrado: ");
        System.out.println("-Lados: " + quadrado.getMedidaLados());
        System.out.println("-Área: " + quadrado.getArea());

        System.out.println("Cubo: ");
        System.out.println("-Lados: " + cubo.getMedidaLados());
        System.out.println("-Área: " + cubo.getArea());

        quadrado.setMedidaLados(30);
        cubo.setMedidaLados(30);

        System.out.println("Quadrado: ");
        System.out.println("-Lados: " + quadrado.getMedidaLados());
        System.out.println("-Área: " + quadrado.getArea());

        System.out.println("Cubo: ");
        System.out.println("-Lados: " + cubo.getMedidaLados());
        System.out.println("-Área: " + cubo.getArea());
    }
}
