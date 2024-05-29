#include <iostream>
using namespace std;

int main() {
    // Inteiro (int)
    // O tipo int é usado para declarar variáveis que armazenam números inteiros (sem parte decimal).
    int inteiro = 10;
    cout << "Valor da variável inteira: " << inteiro << endl; // Imprime o valor da variável inteira

    // Ponto flutuante (float)
    // O tipo float é usado para declarar variáveis que armazenam números reais (com parte decimal).
    float pontoFlutuante = 3.14f;
    cout << "Valor da variável ponto flutuante: " << pontoFlutuante << endl; // Imprime o valor da variável ponto flutuante

    // Ponto flutuante de precisão dupla (double)
    // O tipo double é semelhante ao float, mas com precisão dupla, ou seja, pode armazenar números com mais casas decimais.
    double pontoFlutuanteDuplo = 2.7182818284;
    cout << "Valor da variável ponto flutuante de precisão dupla: " << pontoFlutuanteDuplo << endl; // Imprime o valor da variável ponto flutuante de precisão dupla

    // Caractere (char)
    // O tipo char é usado para declarar variáveis que armazenam um único caractere.
    char caractere = 'A';
    cout << "Valor da variável caractere: " << caractere << endl; // Imprime o valor da variável caractere

    // Booleano (bool)
    // O tipo bool é usado para declarar variáveis que armazenam valores booleanos (verdadeiro ou falso).
    bool booleano = true; // ou false
    cout << "Valor da variável booleano: " << booleano << endl; // Imprime o valor da variável booleano (1 para true, 0 para false)

    // Cadeia de caracteres (string)
    // O tipo string é usado para declarar variáveis que armazenam uma sequência de caracteres.
    string cadeiaDeCaracteres = "Olá, mundo!";
    cout << "Valor da variável string: " << cadeiaDeCaracteres << endl; // Imprime o valor da variável string

    // Caractere array (char array)
    // O tipo char array é usado para declarar uma sequência de caracteres, mas com um limite de tamanho definido.
    char charArray[255] = "Esta é uma cadeia de caracteres com um limite de 255 caracteres.";
    cout << "Valor da variável char array: " << charArray << endl; // Imprime o valor da variável char array

    return 0;
}
