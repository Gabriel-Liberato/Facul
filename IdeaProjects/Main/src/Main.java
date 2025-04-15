public class Main {
    public static void main(String[] args) {
        System.out.println();
        Produto produto1 = new Produto("Apagador", 1.99, 1);

        ProdutoEletronico produto2 = new ProdutoEletronico("Teclado", 10.99, 1, 3);

        ProdutoAlimenticio produto3 = new ProdutoAlimenticio("Arroz", 50.99, 1, "2025-08-01");

        Produto[] x = new Produto[]{
                produto1, produto2, produto3
        };

        for(int i = 0; i < 3; i++){
            x[i].exibirDetalhes();
        }
    }
}