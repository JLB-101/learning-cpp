#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<char> text(255);
    text[0] = 'C';
    text[1] = '+';
    text[2] = '+';
    text[3] = ' ';
    text[4] = 'P';
    text[5] = 'r';
    text[6] = 'o';
    text[7] = 'g';
    text[8] = 'r';
    text[9] = 'e';
    text[10] = 's';
    text[11] = 's';
    text[12] = 'i';
    text[13] = 'v';
    text[14] = 'o';
    text[15] = '\0';  // Terminando a string

    cout << "Vector de caracteres: " << &text[0] << endl;

    return 0;
}
