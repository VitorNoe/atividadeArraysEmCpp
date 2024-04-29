#include <iostream>
using namespace std;

int main() {

    float notas[5];
    float pesos[5];

    cout << "Insira os valores das notas e seus pesos correspondentes:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Nota " << i+1 << ": ";
        cin >> notas[i];
        cout << "Peso " << i+1 << ": ";
        cin >> pesos[i];
    }

    float soma_notas_ponderadas = 0;
    float soma_pesos = 0;
    for (int i = 0; i < 5; ++i) {
        soma_notas_ponderadas += notas[i] * pesos[i];
        soma_pesos += pesos[i];
    }
    float media_ponderada = soma_notas_ponderadas / soma_pesos;

    cout << "A média ponderada das notas é: " << media_ponderada << endl;

    return 0;
}