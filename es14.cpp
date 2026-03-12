#include <iostream>                   
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
int n;
int numc;

 
  do {
    srand(time(0));
    cout<<"inserisci un numero ";
    cin>>n;

    if(n<numc){
       cout<<"troppo basso! "<<endl;
    }
    else if(n>numc){
       cout<<"troppo alto! "<<endl;
    }
  } while (n!=numc);
    cout<<"bravo hai indovinato! "<<endl;
}



