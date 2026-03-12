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
    cout<<"inserire il numero dei dipendenti"<<endl;
    cin>>n;

    cout<<"inserire lo stipendio base"<<endl;
    cin>>prezzo;

    for (i=0; i<n; i++)
    {

    cout<<"inserire il tipo di contratto"<<endl;
    cin>>tipo;
    
    if(tipo=="tempo pieno"){
        ntipo=1;
    }
    else if(tipo=="part time"){
        ntipo=2;
    }
    else if(tipo=="stage"){
        ntipo=3;
    }

    switch (ntipo)
    {
    case 1:
        sconto=prezzo*0.15;
        prezzos=prezzo+sconto;
        tot=tot+prezzos;
        break;

    case 2:
        sconto=prezzo*0.10;
        prezzos=prezzo+sconto;
        tot=tot+prezzos;
        break;

    case 3:
        sconto=prezzo*0.05;
        prezzos=prezzo+sconto;
        tot=tot+prezzos;
        break;
    
    default:
        break;
    }
    cout<<"il totale stipendi è: "<<tot<<endl;
    }
}
