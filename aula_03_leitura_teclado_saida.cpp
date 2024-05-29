#include <iostream>
#include <string>

using namespace std;

int main() {
    // Leitura de Inteiro (int)
    // Declaração e inicialização de variável int.
    int num1, num2, soma, subtracao, multiplicacao, divisao, resto;
    cout << "Digite um número inteiro: ";
    cin >> num1; // Leitura de um número inteiro do teclado
    cout << "Digite outro número inteiro: ";
    cin >> num2; // Leitura de outro número inteiro do teclado

    // Operações aritméticas básicas com inteiros
    soma = num1 + num2;
    subtracao = num1 - num2;
    multiplicacao = num1 * num2;
    divisao = num1 / num2; // Divisão inteira
    resto = num1 % num2; // Resto da divisão

    cout << "Soma: " << soma << endl;
    cout << "Subtração: " << subtracao << endl;
    cout << "Multiplicação: " << multiplicacao << endl;
    cout << "Divisão: " << divisao << endl;
    cout << "Resto: " << resto << endl;

    // Leitura de Ponto Flutuante (float)
    //initialyze: Declaração e inicialização de variável float.
    float num3, num4, somaF, subtracaoF, multiplicacaoF, divisaoF;
    cout << "Digite um número float: ";
    cin >> num3; // Leitura de um número float do teclado
    cout << "Digite outro número float: ";
    cin >> num4; // Leitura de outro número float do teclado

    // Operações aritméticas básicas com floats
    somaF = num3 + num4;
    subtracaoF = num3 - num4;
    multiplicacaoF = num3 * num4;
    divisaoF = num3 / num4;

    cout << "Soma (float): " << somaF << endl;
    cout << "Subtração (float): " << subtracaoF << endl;
    cout << "Multiplicação (float): " << multiplicacaoF << endl;
    cout << "Divisão (float): " << divisaoF << endl;

    // Leitura de Caracter (char)
    //Delaration: Declaração e inicialização de variável char.
    char caractere;
    cout << "Digite um caractere: ";
    cin >> caractere; // Leitura de um caractere do teclado

    cout << "O caractere digitado foi: " << caractere << endl;

    // input: Leitura de Cadeia de Caracteres (string)
    // Declaração e inicialização de variável string.
    string cadeia1, cadeia2, concatenacao;
    cout << "Digite uma cadeia de caracteres: ";
    cin >> cadeia1; // Leitura de uma cadeia de caracteres do teclado
    cout << "Digite outra cadeia de caracteres: ";
    cin >> cadeia2; // Leitura de outra cadeia de caracteres do teclado

    // Concatenação de strings
    concatenacao = cadeia1 + " " + cadeia2;

    cout << "Concatenação: " << concatenacao << endl;

    return 0;
}
