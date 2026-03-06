#include <iostream>
#include <string>
using namespace std;
int voc=0;
int i=0;
string parola; 
                                                          //jpxfrd
int main()
{
cout<<"inserisci una frase ";
getline(cin, parola);
for(i=0;i<parola.length();i++){
char c=parola[i];
switch (c)
{
case 'a':
    voc++;
    break;

case 'e':
    voc++;
    break;

case 'i':
    voc++;
    break;

case 'o':
    voc++;
    break;

case 'u':
    voc++;
    break;

}
}

cout<<"il numero di vocali è: "<<voc;

}