public class Medico extends Pessoa {
    private String especializacao;

    public Medico (String expecializacao) {
        // A função super q chama o construtor da classe mãe, espera os parâmetros nome e idade
        super("aabada", 2);
        this.especializacao = especializacao;
    }
}
