#include <iostream>
using namespace std;
int main()
{
int n;
int p;
int x;
bool uguali =true;
bool zero =true;
cout<<"dammi un numero "<<endl;
cin>>x;
while (zero){
    p=x;
    if(x==0){
        zero=false;
        break;
    }

   cout<<"dammi un numero "<<endl;
cin>>x; 
if (x!=p && x!=0){
    uguali=false;
}
}
if(uguali){
    cout<<"uguali";
}
else{
    cout<<"diversi";
}
}

