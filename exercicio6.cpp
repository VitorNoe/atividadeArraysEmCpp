#include <iostream>
using namespace std;

int main() {
 
    char array[5];
    
    array[0] = 'A';
    array[1] = 'B';
    array[2] = 'C';
    array[3] = 'D';
    array[4] = 'E';

    int tamanho = sizeof(array) / sizeof(array[0]);

    cout << "Tamanho total do array: " << tamanho << endl;

    return 0;
}