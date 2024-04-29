#include <iostream>
using namespace std;

int main() {

    int array[10];

    cout << "Insira 10 valores inteiros para preencher o array:" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << "Valor para o elemento " << i << ": ";
        cin >> array[i];
    }

    cout << "Valores do array:" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << "Elemento " << i << ": " << array[i] << endl;
    }

    return 0;
}