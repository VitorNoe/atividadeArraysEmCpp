#include <iostream>
using namespace std;

int main() {
 
    int array[] = {3, 7, 9, 12, 4, 6, 8, 10};

    cout << "O terceiro elemento do array: " << array[2] << endl;

    int soma = array[5] + array[7];
    cout << "A soma do sexto elemento com o oitavo elemento: " << soma << endl;

    int diferenca = array[1] - array[0];
    cout << "A diferença entre o segundo elemento e o primeiro: " << diferenca << endl;

    if (array[3] > 6) {
        cout << "O quarto elemento: " << array[3] << endl;
    }

    if (array[0] % 2 == 0) {
        cout << "O último elemento: " << array[7] << endl;
    }

    if (array[3] + array[7] > 22) {
        cout << "O primeiro elemento: " << array[0] << endl;
    }

    return 0;
}