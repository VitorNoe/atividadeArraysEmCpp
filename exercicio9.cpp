#include <iostream>
using namespace std;

int main() {

    int array[10];

    for (int i = 0; i < 10; ++i) {
        array[i] = i + 1;
    }

    int soma = 0;

    for (int i = 0; i < 10; ++i) {
        soma += array[i];
    }

    cout << "A soma de todos os elementos do array é: " << soma << endl;

    return 0;
}