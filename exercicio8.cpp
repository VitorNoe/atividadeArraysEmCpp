#include <iostream>
using namespace std;

int main() {

    float array[10];

    cout << "Insira 10 valores float para preencher o array:" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << "Valor para o elemento " << i << ": ";
        cin >> array[i];
    }

    float soma = 0;
    for (int i = 0; i < 10; ++i) {
        soma += array[i];
    }

    float media = soma / 10;

    cout << "A média dos valores fornecidos é: " << media << endl;

    return 0;
}