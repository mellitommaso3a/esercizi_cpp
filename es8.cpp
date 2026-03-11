#include <iostream>
#include <string>
using namespace std;

bool x=true;
double n;
int i=0;
double sum;
double media;

                                                          //jpxfrd
int main()
{
  while(n!=-1){
  cout<<"inserire un numero ";
  cin>>n;
  i++;
  sum=sum+n;
  }

  media=sum/i;
 cout<<"la media è: "<<media;
}