public class Pessoa {
    private String nome;
    private int cpf;
    private String email;
    protected int tempoEmprestimo = 7;

    public Pessoa(String nome, int cpf, String email) {
        this.nome = nome;
        this.cpf = cpf;
        this.email = email;
    }

    public int mostrarTempoEmprestimo() {
        return tempoEmprestimo;
    }

    public String getNome() {
        return nome;
    }
}
