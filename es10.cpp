#include <iostream>
#include <string>
using namespace std;
int n;
int i=0;
int max;


                                                          //jpxfrd
int main()
{
  while(i!=3){
  cout<<"inserisci un codice errore ";
  cin>>n;
  switch (n)
  {
  case 400:
    cout<<"bad request"<<endl;
    i++;
    break;

  case 401:
    cout<<"Unauthorized"<<endl;
    i++;
    break;

  case 403:
    cout<<"forbidden"<<endl;
    i++;
    break;

  case 404:
    cout<<"not found"<<endl;
    i++;
    break;

  case 200:
    cout<<"corretto"<<endl;
    break;
  
  default:
    cout<<"errore sconosciuto"<<endl;
    break;
  }
  }

 cout<<"numero errori superato ";
}