#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Estrutura condicional if
    // O if é usado para executar um bloco de código se a condição for verdadeira.
    int numero;
    cout << "Digite um número inteiro: ";
    cin >> numero;

    if (numero > 0)
    {
        cout << "O número é positivo." << endl; // Executa este bloco se a condição for verdadeira
    }

    // Estrutura condicional if-else
    // O if-else é usado para executar um bloco de código se a condição for verdadeira,
    // e outro bloco se a condição for falsa.
    if (numero > 0)
    {
        cout << "O número é positivo." << endl; // Executa este bloco se a condição for verdadeira
    }
    else
    {
        cout << "O número é negativo ou zero." << endl; // Executa este bloco se a condição for falsa
    }

    // Estrutura condicional if-else if-else
    // O if-else if-else é usado para testar múltiplas condições.
    if (numero > 0)
    {
        cout << "O número é positivo." << endl; // Executa este bloco se a condição for verdadeira
    }
    else if (numero < 0)
    {
        cout << "O número é negativo." << endl; // Executa este bloco se a condição for verdadeira
    }
    else
    {
        cout << "O número é zero." << endl; // Executa este bloco se nenhuma das condições anteriores for verdadeira
    }

    // Estrutura condicional switch
    // O switch é usado para selecionar uma entre várias opções.
    int opcao;
    cout << "Escolha uma opção (1, 2 ou 3): ";
    cin >> opcao;

    switch (opcao)
    {
    case 1:
        cout << "Você escolheu a opção 1." << endl;
        break; // break é necessário para sair do bloco switch após a execução do caso
    case 2:
        cout << "Você escolheu a opção 2." << endl;
        break;
    case 3:
        cout << "Você escolheu a opção 3." << endl;
        break;
    default:
        cout << "Opção inválida." << endl; // Executa este bloco se nenhum dos casos anteriores for verdadeiro
    }

    // Estrutura condicional aninhada (nested)
    // O if aninhado é quando um if está dentro de outro if.
    int idade;
    cout << "Digite sua idade: ";
    cin >> idade;

    if (idade >= 18)
    {
        cout << "Você é maior de idade." << endl;
        if (idade >= 65)
        {
            cout << "Você é idoso." << endl; // Este bloco será executado se ambas as condições forem verdadeiras
        }
    }
    else
    {
        cout << "Você é menor de idade." << endl;
    }

    return 0;
}
