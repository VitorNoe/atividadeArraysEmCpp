#include <iostream>
using namespace std;

int main() {

    int array[5];
    array[0] = 10;
    array[1] = 20;
    array[2] = 30;
    array[3] = 40;
    array[4] = 50;

    cout << "Elementos do array:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Elemento " << i << ": " << array[i] << endl;
    }

    return 0;
}