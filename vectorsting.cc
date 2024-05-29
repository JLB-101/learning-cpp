#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<string> phrases = {"Bem", "vindos", "ao", "C++"};

    cout << "Vector de strings: ";
    for(int i = 0; i < phrases.size(); ++i) {
        cout << phrases[i] << " ";
    }
    cout << endl;

    return 0;
}
