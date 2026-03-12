#include <iostream>                   
#include <string>                                      //jpxfrd
using namespace std; 
int km;
string tipo;
string carb;
int ntipo;
int ncarb;
int i=0;
int p;

                                                          //jpxfrd

int main()
{
  cout<<"inserisci il tipo di veicolo "<<endl;
  cin>>tipo;

  if (tipo==("macchina"))
  {
  ntipo=1;
  }
  else if (tipo==("moto"))
  {
  ntipo=2;
  }

  cout<<"inserisci il tipo di carburante "<<endl;
  cin>>tipo;

  if (carb==("benzina"))
  {
  ncarb=1;
  }
  else if (tipo==("diesel"))
  {
  ncarb=2;
  }  
  else if (tipo==("elettrico"))
  {
  ncarb=3;
  }
  
  cout<<"inserisci i km percorsi "<<endl;
  cin>>km;  
  
  switch (ntipo)
  {
  case 1:
    cout<<"bad request"<<endl;
    break;

  case 2:
    cout<<"Unauthorized"<<endl;
    break;
  }

 cout<<"numero errori superato ";
}