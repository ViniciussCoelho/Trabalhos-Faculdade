public class Cubo extends Quadrado{
    public Cubo(double medidaLados) {
        super(medidaLados);
    }

    @Override
    public double getArea() {
        return getMedidaLados() * 6;
    }
}
