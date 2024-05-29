#include <iostream>

using namespace std;

int main() {
    // Estrutura de repetição for
    // O for é usado quando sabemos de antemão quantas vezes queremos repetir um bloco de código.
    cout << "Exemplo de for:" << endl;
    for (int i = 0; i < 5; i++) {
        // O loop for tem três partes: inicialização, condição, e incremento
        cout << "i = " << i << endl; // Executa este bloco 5 vezes, com i variando de 0 a 4
    }

    // Estrutura de repetição while
    // O while é usado quando não sabemos exatamente quantas vezes o loop será executado.
    cout << "\nExemplo de while:" << endl;
    int j = 0;
    while (j < 5) {
        // O loop while continua enquanto a condição for verdadeira
        cout << "j = " << j << endl; // Executa este bloco enquanto j for menor que 5
        j++; // Incremento de j
    }

    // Estrutura de repetição do-while
    // O do-while é semelhante ao while, mas garante que o bloco de código seja executado pelo menos uma vez.
    cout << "\nExemplo de do-while:" << endl;
    int k = 0;
    do {
        // O loop do-while executa o bloco pelo menos uma vez antes de verificar a condição
        cout << "k = " << k << endl; // Executa este bloco pelo menos uma vez
        k++; // Incremento de k
    } while (k < 5); // Verifica a condição após a execução do bloco

    // Usando for para somar números de 1 a 10
    int soma = 0;
    for (int n = 1; n <= 10; n++) {
        soma += n; // Adiciona n a soma em cada iteração
    }
    cout << "\nSoma dos números de 1 a 10 usando for: " << soma << endl;

    // Usando while para somar números de 1 a 10
    soma = 0;
    int m = 1;
    while (m <= 10) {
        soma += m; // Adiciona m a soma em cada iteração
        m++; // Incremento de m
    }
    cout << "Soma dos números de 1 a 10 usando while: " << soma << endl;

    // Usando do-while para somar números de 1 a 10
    soma = 0;
    int p = 1;
    do {
        soma += p; // Adiciona p a soma em cada iteração
        p++; // Incremento de p
    } while (p <= 10); // Verifica a condição após a execução do bloco
    cout << "Soma dos números de 1 a 10 usando do-while: " << soma << endl;

    return 0;
}
