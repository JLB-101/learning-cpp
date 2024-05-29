#include <iostream>
using namespace std;

int main()
{
    char site[] = {"C++ Progressivo"};

    cout << "Bem vindos ao "<< site <<endl;

    int num[10], cont;

    for(cont=0 ; cont<10 ; cont++)
        num[cont] = cont+1;

    for(cont=0 ; cont<10 ; cont++)
        cout << "Elemento " << cont+1 << ": " << num[cont] << endl;

}