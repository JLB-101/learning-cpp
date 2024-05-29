#include <iostream>
#include <string>
using namespace std;

int main()
{
    string phrases[] = {"Olá", "Mundo", "em C++"};

    cout << "Array de strings: ";
    for(int i = 0; i < 3; ++i) {
        cout << phrases[i] << " ";
    }
    cout << endl;

    return 0;
}
