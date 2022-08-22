public class Ponto3D extends Ponto2D {
    private double z;

    public Ponto3D(double x, double y, double z) {
        // não existem variáveis _x e _y em PONTO3D, o certo é passar com a função super os parametros x
        // e y para a função construtora de Ponto2D. E também passar o z com o this.
        super(x, y);
        this.z = z;
    }
}
