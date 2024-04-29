#include <iostream>
using namespace std;

int main() {

    float array[8];
    array[0] = 2.5;
    array[1] = 6.8;
    array[2] = 4.2;
    array[3] = 9.1;
    array[4] = 3.7;
    array[5] = 7.3;
    array[6] = 1.6;
    array[7] = 5.5;

    cout << "Valores maiores que 5 do array:" << endl;
    int i = 0;
    while (i < 8) {
        if (array[i] > 5.0) {
            cout << array[i] << endl;
        }
        i++;
    }

    return 0;
}