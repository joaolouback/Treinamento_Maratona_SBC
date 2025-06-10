// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=12&page=show_problem&problem=1012


#include <iostream> // Inclui a biblioteca padrão para entrada e saída (cin, cout)

using namespace std; // Permite usar cout e cin sem precisar escrever std::cout ou std::cin

int main(){ // Função principal - ponto de entrada do programa
    int v, t; // Declara duas variáveis inteiras: v (velocidade) e t (tempo)

    // Enquanto for possível ler dois números inteiros da entrada (v e t)
    while(cin >> v >> t ){
        // Calcula e imprime o deslocamento no dobro do tempo: 2 * v * t
        cout << v * 2 * t << endl; 
    }

    // Retorna 0 para indicar que o programa terminou corretamente
    return 0;
}
