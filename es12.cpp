#include <iostream>                   
#include <string>                                      //jpxfrd
using namespace std; 
int n;
string tipo;
int ntipo;
double sconto;
double prezzo;
double prezzos;
double tot=0;
int i=0;
int p;
int main()
{
    cout<<"inserire il numero di biglietti"<<endl;
    cin>>n;

    cout<<"inserire il prezzo dei biglietti"<<endl;
    cin>>prezzo;

    for (i=0; i<n; i++)
    {

    cout<<"inserire il tipo di biglietto"<<endl;
    cin>>tipo;
    
    if(tipo=="studente"){
        ntipo=1;
    }
    else if(tipo=="adulto"){
        ntipo=2;
    }
    else if(tipo=="over 65"){
        ntipo=3;
    }

    switch (ntipo)
    {
    case 1:
        sconto=prezzo*0.30;
        prezzos=prezzo-sconto;
        tot=tot+prezzos;
        break;

    case 2:
        sconto=prezzo*0.05;
        prezzos=prezzo-sconto;
        tot=tot+prezzos;
        break;

    case 3:
        sconto=prezzo*0.40;
        prezzos=prezzo-sconto;
        tot=tot+prezzos;
        break;
    
    default:
        break;
    }
    cout<<"l'incasso totale è: "<<tot<<endl;
    }
}
