#include <iostream>
using namespace std;

int main()
{
    int n;

    do {
        cout << "Inserisci un numero maggiore di uno: ";
        cin >> n;
    } while (n <= 1);

    int potenza = n;
    int esponente = 1;

    while (potenza <= 5000) {
        cout << n << "^" << esponente << " = " << potenza << endl;
        esponente++;
        potenza *= n;
    }

}
