#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std; 


int main() {
  std::cout << "Hello World!";


cout <<"\n";


// 4.26, 4.27, 4.30 y 5.12
//4.26
int alto,largo;
    cout<<("Ingrese un numero: ");
    cin>>(alto);

cout <<"\n";

    for(int i=0; i<alto ; i++){
        for(int j=0; j<alto; j++)
            cout<<("*");
        cout<<("\n");
    }

int relleno = alto-3;
cout<<("\n");
for(int c=0;c<=alto-1;c++){
cout << "*";
}
cout << endl;

for(int c3=0;c3<=relleno;c3++){
for(int c=0;c<=1;c++){
cout << "*";
for(int c2=0;c2<=relleno;c2++){
cout << " ";}
}cout<<endl;}
for(int c=0;c<=alto-1;c++){
cout << "*";
}



cout <<"\n";
//4.27

int a;
string palabra;
 
	cout<<"Ingrese palabra:"<<endl;
	cin >> palabra;
 
	size_t longitud = palabra.length()-1;
	size_t i=0;
	bool esPalindromo = true;
 
	for(i=0 ; i<palabra.length()/2 && esPalindromo ;i++) {
 
		if(palabra[i]!=palabra[longitud-i]){
			esPalindromo = false;
		}
 
	}
 
    cout<<((true == esPalindromo) ? "es palíndromo" : "no es palíndromo")<<endl;
 


//5.12 Escriba una aplicación que calcule producto de los múltiplos de 3 en el rango de 3 a 50.
/*
 int t3 =3;
 int o3=100;
for (int i=0;i<=o3;i++){
  i=i+1;
  t3=t3 * i;
  if (t3>=50){
    o3=0;
  }
cout<<t3;
cout <<"\n";
} jajaja puse la potencia y no sus multiplos
*/ 
int t3 =3;
 int o3=100;
for (int i=3;i<=50;i=i+3){
  
cout<<i;
cout <<"\n";
}


cout <<"\n";
 //4.30 fibonaci

 bool g = true;
int s,q=0,b=1,c=1;
	while(g==true){

		s=q+b;
		q=b;
		b=s;
    
	}
cout<<s;

cout <<"\n";



}