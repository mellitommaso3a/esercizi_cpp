#include <iostream>
using namespace std;

int i=0;
int n=10;
int main(){

srand(time(0));
int numeri[n];

for ( i = 0; i < n; i++) {       
    int numc=rand() % 100 + 1; 
    numeri[i]=numc;
}
for ( i = 0; i < n; i++) {
    if (i%2==0){
    cout<<"0"<<endl;
    }
    else{
    cout<<numeri[i]<<endl;
    }
}

}