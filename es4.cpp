#include <iostream>
#include <string>
using namespace std;
int n;                                                           //jpxfrd
int molt=1;
int main()
{

cout<<"inserire un numero ";
cin>>n;

while(n>1){

    molt=molt*n;
    n--;
}
cout<<molt;
}