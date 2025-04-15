public class Loja {
    String nome;
    Produto[] listaProdutos;

    public Loja(String nome, Produto[] listaProdutos) {
        this.nome = nome;
        this.listaProdutos = listaProdutos;
    }

    public void addProduto(Produto novoProduto){

    }

    public Produto[] listarProdutos(){
        return listaProdutos;
    }
}
