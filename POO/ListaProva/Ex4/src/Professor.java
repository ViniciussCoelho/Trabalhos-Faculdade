public class Professor extends Pessoa {
    private String formacao;
    private float salario;
    private String departamento;

    public Professor(String nome, int cpf, String email, String formacao, float salario, String departamento) {
        super(nome, cpf, email);
        this.formacao = formacao;
        this.salario = salario;
        this.departamento = departamento;
        tempoEmprestimo =  7 + (int)(0.7 * 7);
    }

    public int mostrarTempoEmprestimo() {
        return super.mostrarTempoEmprestimo();
    }
}
