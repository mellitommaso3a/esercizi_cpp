#include <iostream>                   
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
double n;
double numc;
double media;
double somma=0;
double max=0;
double min=99999999999;
int i;

 
  do {
    cout<<"inserisci un numero ";
    cin>>n;
    
    if(n>max){
        max=n;
    }
    if(n<min&&n!=0){
        min=n;
    }
    somma=somma+n;
    i++;
  } while (n!=0);
    media=somma/i;
    cout<<"somma: "<<somma<<endl;
    cout<<"min: "<<min<<endl;
    cout<<"max: "<<max<<endl;
    cout<<"media: "<<media<<endl;
}



