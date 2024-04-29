#include <iostream>
using namespace std;

int main() {

    int array[8];

    array[0] = 5;
    array[1] = 8;
    array[2] = 12;
    array[3] = 15;
    array[4] = 20;
    array[5] = 9;
    array[6] = 18;
    array[7] = 25;

    cout << "Números múltiplos de 3 e maiores que 10 do array:" << endl;
    for (int i = 0; i < 8; ++i) {
        if (array[i] > 10 && array[i] % 3 == 0) {
            cout << array[i] << endl;
        }
    }

    return 0;
}