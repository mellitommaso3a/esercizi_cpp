#include <iostream>
using namespace std;

int vet[10];
int vet2[10];
int x;
int i=0;
int j=0;
int y;
int c=0;

int main(){
    for (i=0; i<10; i++)
    {
        cout<<"inserire un numero ";
        cin>>x;
        vet[i]=x;
        vet2[i]=x;

    }
    for (i=0; i<10; i++){
    for (j=0; j<10; j++){

        if (vet[i]=vet2[j])
        {
          c++;
        }
        

    }
    }
    
    cout<<c<<endl;
}