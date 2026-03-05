#include <iostream>
#include <string>
using namespace std;
int n;                                                           //jpxfrd
int i=1;
int molt;
int main()
{

cout<<"inserire un numero ";
cin>>n;

while(i<=n){

    n=n*i;
    i--;
}
cout<<n;
}