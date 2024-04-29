#include <iostream>
using namespace std;

int main() {

    int array[7];

    array[0] = 10;
    array[1] = 7;
    array[2] = 22;
    array[3] = 15;
    array[4] = 30;
    array[5] = 9;
    array[6] = 8;

    cout << "Numeros pares do array:" << endl;
    for (int i = 0; i < 7; ++i) {
        if (array[i] % 2 == 0) {
            cout << array[i] << endl;
        }
    }

    return 0;
}