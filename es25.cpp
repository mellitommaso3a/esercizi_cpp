#include <iostream>
using namespace std;
#include <iostream>
using namespace std;

int n;
int molt=1;
int somma=0;
int max=0;
bool cont=true;

int main(){

  cout<<"inserire la quantità di numeri ";
  cin>>n;
  int vet[n];

  for(int i=0; i<n; i++){
  cout<<"inserire il numero nella posizione: "<<i<<" ";
  cin>>vet[i];    
  }

  do{
  cout<<"1 per la somma"<<endl;
  cout<<"2 per la moltiplicazione"<<endl;
  cout<<"3 per trovare il massimo"<<endl;
  cout<<"4 per uscire"<<endl;
  int s;
  cin>>s;
  switch (s)
  {
  case 2:
  for (int i=0; i<n; i++){
  molt=molt*vet[i];
  }
  cout<<molt;
  break;
  
  case 1:
  for (int i=0; i<n; i++){
  somma=somma+vet[i];
  }
  cout<<somma;
  break;

  case 3:
  for (int i=0; i<n; i++){
  if (vet[i] > max)
  {
    max = vet[i];
  }
  
  }
  cout<<max;
  break;

  default:
  cout<<"funzione non esistente"<<endl;  
    break;
  }

  }while(cont=false);
}



