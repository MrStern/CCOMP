#include <iostream>
#include <cstdio>
using namespace std;

int main()
{//mi nombre es Anthony Erick Raul Gamarra Gonzales
	  
  //2.27 2.28 2.29
//NO TIENEN SENTIDO NO ENTIENDO NADA
//2.27
char a =65;
cout << "A \n "<<"imprime la letra mayuscula a \n" ;
cout <<a<< "  imprime A con ascii \n ";

// escribir un programa que imprima el equivalente entero de un caracter escrito en el teclado almacene la entrada en una variable chr pruevelo con mayusculas y minusculas

int b;
cout << "dame un caracter : " ;
cin >>a ;

b=a;
cout <<"su equivalente entero es: "<<b ;

//funciona con mayusculas y minusculas


//escriba un programa que ingrese un entero de cuatro digitos, separe en sus digiros y los imprime en orden inverso separados por 2 espacios cada uno (usar un entero) ejemplo si ponen 4315 deberia imprimir el entero 5134 


cout <<"\n ";
int a1,a2,a3,a4;

cout <<" ingrese un entero de 1 digitos";
cin >> a1;
cout <<"\n ";
cout <<" ingrese un entero de 1 digitos";
cin >> a2;
cout <<"\n ";
cout <<" ingrese un entero de 1 digitos";
cin >> a3;
cout <<"\n ";
cout <<" ingrese un entero de 1 digitos";
cin >> a4;
cout <<"\n ";
cout <<" su numero es de 4 digitos en total :";
//array a5[4];

//cout <<a5[x] <<" \n ";

int a5[4]= {a1,a2,a3,a4};
bool g=true;
int x=0;
//cout <<a1 <<a2<<a3<<a4<<" \n ";
cout << a5[0]<<a5[1]<<a5[2]<<a5[3];
/*
while (g==true) {
cout <<a5[x] <<" \n ";

if (x==4)g=false;
x++;
}*/

cout <<"\n ";
cout <<"convirtiendo en inverso "<< a5[3]<< a5[2]<<a5[1]<<a5[0] ;
cout <<"\n ";






	return 0;


}
