#include<iostream>

using namespace std;
int main(){

int numero1;
int numero2;
cout<<"Comparacion de 2 numeros enteros\n";

cout <<"Escriba primer numero:";
cin >>numero1;
cout<<"Escriba segundo numero:";
cin>>numero2;


if (numero1 == numero2)
    cout<<numero1 << "==" << numero2 << endl;
if(numero1 != numero2)
   cout<< numero1 << "!=" <<numero2<<endl;
if(numero1< numero2)
   cout<< numero1 << "<" <<numero2<<endl;
if(numero1> numero2)
   cout<< numero1 << ">" <<numero2<<endl;
if(numero1<= numero2)
   cout<< numero1 << "<=" <<numero2<<endl;

if(numero1>=numero2)
  cout<<numero1<< ">="<<numero2<<endl;

return 0;
}
