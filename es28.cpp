#include <iostream>
using namespace std;

int n=0;
string x;
bool y=true;
string parole[n];

int main()
{
   do{

   cout<<"inserire una parola "<<endl;
   cin>>x;
   n++;
   
   parole[n]=x;

   if(x=="stop"){
    y=false;
   }

   }while (y=true);

   for (int i=0; i <n; i++)
   {
   cout<<parole[n];
   }
   

}
