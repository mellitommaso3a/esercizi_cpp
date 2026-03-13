#include <iostream>                   
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
int n;
int numc;
int i;

 
  do {
    numc=rand() % 100 + 1; 
    srand(time(0));
    cout<<"inserisci un numero ";
    cin>>n;

    if(n<numc){
       cout<<"troppo basso! "<<endl;
    }
    else if(n>numc){
       cout<<"troppo alto! "<<endl;
    }
    else if(n=numc){
        cout<<"bravo hai indovinato! "<<endl;
    }
  } while (i<5);
}



