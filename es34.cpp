#include <iostream>
using namespace std;

int n;
int m;
string nome;
string nomep;
int pu;
int pv;

int main(){

    cout<<"inserire la quantità di negozi "<<endl;
    cin>>n;

    cout<<"inserire la quantità di prodotti "<<endl;
    cin>>m;

int prodotti[m];
string negozi[n];
string nprodotto[m];
int puprodotto[m];
int vprodotto[m];

    for (int i=0; i<n; i++)
    {
        cout<<"inserire il nome del "<<i<<" negozio ";
        cin>>nome;
        negozi[n]==nome;
    }

    for (int j=0; j<n; j++)
    {
        cout<<"inserire il nome del "<<j<<" prodotto ";
        cin>>nomep;
        nprodotto[m]==nomep;

        cout<<"inserire il prezzo unitario del "<<j<<" prodotto ";
        cin>>pu;
        puprodotto[m]=pu;

        cout<<"inserire le unità vendute del "<<j<<" prodotto ";
        cin>>pv;
        puprodotto[m]=pv;
    }

}


