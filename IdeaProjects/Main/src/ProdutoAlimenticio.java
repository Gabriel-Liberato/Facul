public class ProdutoAlimenticio extends Produto {
    String dataValidade;

   public ProdutoAlimenticio(String nome, double preco, int quantidade, String dataValidade){
       super(nome, preco, quantidade);
       this.dataValidade = dataValidade;

   }

    public void exibirDetalhes(){
        super.exibirDetalhes();
        System.out.println("Data: "+dataValidade);
    }

}
