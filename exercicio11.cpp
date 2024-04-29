#include <iostream>
using namespace std;

int main() {

    int array[12];

    for (int i = 0; i < 12; ++i) {

        array[i] = i + 1;
    }

    int maximo = array[0];
    int minimo = array[0];

    for (int i = 1; i < 12; ++i) {
        if (array[i] > maximo) {
            maximo = array[i];
        }
        if (array[i] < minimo) {
            minimo = array[i];
        }
    }

    cout << "O valor máximo do array é: " << maximo << endl;
    cout << "O valor mínimo do array é: " << minimo << endl;

    return 0;
}