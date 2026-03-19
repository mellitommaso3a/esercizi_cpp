#include <iostream>
using namespace std;

int main() {

    int n=12;
    int max=0;
    int i=0;
    int numeri [n];
    int cerca;
    int p;
    srand(time(0));


    for ( i = 0; i < n; i++) {       
        int numc=rand() % 50 + 1; 
        numeri[i]=numc;
    }

    cout<<"inserire il numero da cercare"<<endl;
    cin>>cerca;

    for ( i = 0; i < n; i++) {  
      if (numeri[i] = cerca) {
        p=1;
     }
     else{
        p=2;
     }
    }

    if(p=1){
      cout<<"numero trovato!";
    }
    else{
     cout<<"numero non trovato";
    }

    return 0;
}