public class Aluno extends Pessoa {
    private String curso;
    private String fase;
    private int matricula;

    public Aluno(String nome, int cpf, String email, String curso, String fase, int matricula) {
        super(nome, cpf, email);
        this.curso = curso;
        this.fase = fase;
        this.matricula = matricula;
        tempoEmprestimo =  7 + (int)(0.4 * 7);
    }

    public int mostrarTempoEmprestimo() {
        return super.mostrarTempoEmprestimo();
    }
}
