#include <iostream>
using namespace std;

int n;
int molt=1;

int main(){

  cout<<"inserire la quantità di numeri ";
  cin>>n;
  int vet[n];

  for(int i=0; i<n; i++){
  cout<<"inserire il numero nella posizione: "<<i<<" ";
  cin>>vet[i];    
  }

  for (int i=0; i<n; i++){
  if (i%2!=0){
  molt=molt*vet[i];
  }
  }
  
  cout<<molt;

}



