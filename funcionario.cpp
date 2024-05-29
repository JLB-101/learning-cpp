#include <iostream>

using namespace std;
int main()
{
    // lis de telefones de funcionarios(lf)
    int lf[5] = {840011222, 840011222, 840011222, 840011222, 840011222};

    //onde vai ser guardado o codigo do funcionario
    int x;
    //star do sistema
    cout << "SYSTEMA DE BUSCA DE CONTACTOS\n";

    // capturar o valor para x
    cout << "digite o codigo do funcionario: ";
    cin>> x;

    // codicoes e output/saida
    if(x<=5){
        cout << "\n nr_de_telefone:" << lf[x] << "\n";
    }
    else{
        cout << "Oops, codigo nao existe!!! \n";
    }

    // fim
    return 0;
}
