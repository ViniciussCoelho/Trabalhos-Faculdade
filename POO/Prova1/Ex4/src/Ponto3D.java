public class Ponto3D extends Ponto2D {
    private double z;
    // - O nome dos parâmetros estavam diferentes dos utilizados dentro do construtor.
    // - É necessário chamar o construtor da classe mãe com o super.
    // - Ponto3D não estava como public.
    public Ponto3D(double _x, double _y, double _z) {
        super(_x, _y);
        z=_z;
    }
}