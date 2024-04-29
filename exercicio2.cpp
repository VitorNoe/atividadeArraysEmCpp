#include <iostream>
using namespace std;

int main() {
    char array[6];
    char letra = 'A';
    int i = 0;
    while (i < 6) {
        array[i] = letra;
        letra++;
        i++;
    }

    cout << "Elementos do array:" << endl;
    i = 0;
    while (i < 6) {
        cout << "Elemento " << i << ": " << array[i] << endl;
        i++;
    }

    return 0;
}