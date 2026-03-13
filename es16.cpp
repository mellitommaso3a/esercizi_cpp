#include <iostream>                   
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
double n;
double s;
double sconto;
double media;
double somma=0;
double max=0;
double min=99999999999;
int i;

 
  do {
    cout<<"inserisci il prezzo "<<endl;
    cin>>n;
    cout<<"inserisci lo sconto (formato 0.xx)"<<endl;
    cin>>s;

    sconto=n*s;
    n=n-sconto;

    cout<<"prezzo finale: "<<n<<endl;

  } while (n!=0);
}



