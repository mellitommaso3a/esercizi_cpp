#include <iostream>
using namespace std;

int g=0;
double s;                           //jpxfrd
int a;
int b;
string c;
bool continua=true;

int main()
{
  cout<<"quanti soldi ha mario?"<<endl;
  cin>>s;

  cout<<"quante pastine ci sono?"<<endl;
  cin>>a;

  cout<<"quanti panini ci sono?"<<endl;
  cin>>b;


 while(continua=true){
  cout<<"cosa vuole mangiare mario?"<<endl;
  cin>>c;

  if(c=="pastina"){
    if (a<=0)
    {
     cout<<"pastine esaurite!!!";
     continua=false;
    }
    else{
    s-1;
    a--;   
    }

  }

  if(c=="panino"){
    if (b<=0)
    {
     cout<<"panini esauriti!!!";
     continua=false;
    }
    else{
    s-1.5;
    b--;   
    }
  }

  if(s<=0){
    cout<<"ops hai finito i soldi!!"<<endl;
    continua=false;
  }


  }

}


