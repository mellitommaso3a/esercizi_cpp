#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Quanti numeri vuoi inserire? ";
    cin >> n;

    double* numeri = new double[n];

    for (int i = 0; i < n; i++) {
        cout << "Inserisci il numero " << (i + 1) << ": ";
        cin >> numeri[i];
    }

    double minimo = numeri[0];
    for (int i = 1; i < n; i++) {
        if (numeri[i] < minimo) {
            minimo = numeri[i];
        }
    }

    cout << "Il numero più piccolo è: " << minimo << endl;

    delete[] numeri;
    return 0;
}