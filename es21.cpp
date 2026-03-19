#include <iostream>
using namespace std;

int main() {

    int n=10;
    int max=0;
    int p=0;
    int numeri [n];
    srand(time(0));


    for (int i = 0; i < n; i++) {       
        int numc=rand() % 50 + 1; 
        numeri[i]=numc;
    }

    for (int i = 0; i < n; i++) {
        if (numeri[i] > max) {
            max = numeri[i];
        }
    }

    for (int i = n -1; i >= 0; i--) {
        cout<<"numero: "<<numeri[i]<<" posizione: "<<i<<endl;
    }

    return 0;
}