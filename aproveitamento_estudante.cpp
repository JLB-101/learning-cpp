#include <iostream>
using namespace std;

int main() {
    // Constantes
    const float MAX_PONTOS = 27.0;
    const float PESO_TEORICO = 0.5; // 50%
    const float PESO_PRATICO = 0.5; // 50%
    const float PONTOS_MINIMOS_NORMAL = 60.0; // 60%
    const float PONTOS_MINIMOS_EXCELENTE = 70.0; // 70%

    // Variáveis para armazenar as notas dos testes
    float notaTeorico, notaPratico;

    // Capturar as notas do aluno
    cout << "Digite a nota do teste teórico (máximo 27 pontos): ";
    cin >> notaTeorico;
    cout << "Digite a nota do teste prático (máximo 27 pontos): ";
    cin >> notaPratico;

    // Calcular a porcentagem de cada teste
    float percentualTeorico = (notaTeorico / MAX_PONTOS) * 100 * PESO_TEORICO;
    float percentualPratico = (notaPratico / MAX_PONTOS) * 100 * PESO_PRATICO;

    // Calcular a nota final (em porcentagem)
    float notaFinal = percentualTeorico + percentualPratico;

    // Determinar o status do aluno
    cout << "O estudante com " << notaTeorico << "v (teórico) e " << notaPratico << "v (prático) teve " << notaFinal << "% de aproveitamento." << endl;

    if (notaFinal >= PONTOS_MINIMOS_EXCELENTE) {
        cout << "Parabéns! Você passou com nota excelente!" << endl;
    } else if (notaFinal >= PONTOS_MINIMOS_NORMAL) {
        cout << "Você passou com nota normal." << endl;
    } else {
        cout << "Infelizmente, você não passou." << endl;
    }

    return 0;
}
