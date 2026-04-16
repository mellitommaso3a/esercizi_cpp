#include <iostream>
using namespace std;

int a;
int b;
int i=1;

int main(){

cout<<"inserire un numero ";
cin>>a;

do{
b=a;
cout<<"inserire un numero ";
cin>>a;
i++;

}while(a>b);
cout<<"numeri inseriti "<<i;
}
