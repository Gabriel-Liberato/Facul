public class ProdutoEletronico extends Produto{
    int garantiaMeses;

    public ProdutoEletronico(String nome, double preco, int quantidade, int garantiaMeses){
    super(nome, preco, quantidade);
    this.garantiaMeses = garantiaMeses;
    }
    public void exibirDetalhes() {
        super.exibirDetalhes();
        System.out.println("Garantia: "+garantiaMeses);
    }
}

