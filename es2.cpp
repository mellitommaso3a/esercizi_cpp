#include <iostream>
#include <string>
using namespace std;                                                           //jpxfrd
int a,b;
int main()
{
cout<<"inserire i la base e l'altezza: ";
cin>>a>>b;
if (a<=0 && b<=0)
{
    cout<<"valori non validi";
}else{
    int area=a*b;
    cout<<"l'area è: "<<area;
}
return 0;
}
