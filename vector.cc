#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numbers = {10, 20, 30, 40, 50};

    cout << "Vector de inteiros: ";
    for(int i = 0; i < numbers.size(); ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
