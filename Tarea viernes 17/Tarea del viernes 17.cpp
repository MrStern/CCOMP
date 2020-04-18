#include <iostream>
using namespace std;

int main() {
	std::cout << "Hello World!\n";
	double a, b, g, d, e, n;
	char c;

	//2.16
	std::cout << "Dame 2 numeros!\n";
	std::cin >> a;
	std::cin >> b;

	std::cout << "la suma de esos numeros es : !\n";
	g = a + b;
	std::cout << g << "\n";

	std::cout << "La multiplicacion de esos numeros es: \n";
	g = a * b;
	std::cout << g << "\n";

	std::cout << "la diferencia de esos 2 numeros es: \n";
	g = a - b;
	std::cout << g << "\n";

	std::cout << "el cociente de esos 2 numeros es: \n";
	g = a / b;
	std::cout << g << "\n";

	//2.17
	//escribir  un programa que que imprima los caracteres v a z en la misma línea que un par de adyacentes se parados por un espacio VXYZ la uno la dos y la 3
	for (char g = 86; g < 91; g++) {
		std::cout << g;
	}
	std::cout << "\n";
	std::cout << "V" << "X" << "Y" << "Z" << "\n";
	std::cout << "VX" << "Yz" << "\n";
	std::cout << "VXYz" << "\n";

	// parte 2.18 escribir un programa que pida 2 numeros al usuario y comparar cual es el mas largo o si son iguales facil
	g = 0;
	a = 0;
	std::cout << "deme 2 numeros\n";
	std::cin >> g >> a;
	std::cout << "\n";
	if (g > a) {
		std::cout << "el mayor es: \n" << g;
		std::cout << "\n";
	}
	else if (a > g) {
		std::cout << "el mayor es: \n" << a;
		std::cout << "\n";
	}
	else {
		std::cout << "son iguales en valor";
		std::cout << "\n";
	}
	n = a;
	b = g;
	//si lo que quiere saber es cual es mas largo
   // for (int i=0;i<c;i++){}

	if (n < 10) { c = 1; }
	else if (n < 100) { c = 2; }
	else if (n < 1000) { c = 3; }
	else if (n < 10000) { c = 4; }
	if (b < 10) { c = 1; }
	else if (b < 100) { e = 2; }
	else if (b < 1000) { e = 3; }
	else if (b < 10000) { e = 4; }

	if (c > e) {
		cout << a << " es el numero mas largo ";
	}
	else if (e > c) {
		cout << g << " es el numero mas largo ";
	}
	else {
		cout << "son iguales en largo/numero de digitos";
	}

	//2.19 determinar sobre 3 numeros suma, promedio, multiplicacion, mayor y menor. sencillo es practicamente todo lo que hice
	a = 0;
	b = 0;
	c = 0;
	g = 0;
	std::cout << "\n";

	std::cout << "deme 3 numeros\n";
	std::cin >> a >> b >> c;
	std::cout << "\n";

	std::cout << "la suma de esos numeros es : !\n";
	g = a + b + c;
	std::cout << g << "\n";
	std::cout << "La multiplicacion de esos numeros es: \n";
	g = a * b * c;
	std::cout << g << "\n";
	std::cout << "la diferencia de esos 3 numeros es: \n";
	g = a - b- c;
	std::cout << g << "\n";
	std::cout << "El promedio de esos 3 numeros es : \n";
	g = a + b + c;
	e=g/3;
	std::cout << e << "\n";

	if (a > b&& b > c) {
		std::cout << "el mayor es: \n" << a;
		std::cout << "\n";
		std::cout << "el menor es: \n" << c;
		std::cout << "\n";
	}
	if (a > c&& c > b) {
		std::cout << "el mayor es: \n" << a;
		std::cout << "\n";
		std::cout << "el menor es: \n" << b;
		std::cout << "\n";
	}
	if (b > a&& a > c) {
		std::cout << "el mayor es: \n" << b; std::cout << "\n";
		std::cout << "el menor es: \n" << c;
		std::cout << "\n";
	}
	if (b > c&& c > a) {
		std::cout << "el mayor es: \n" << b; std::cout << "\n";
		std::cout << "el menor es: \n" << a;
		std::cout << "\n";
	}
	if (c > b&& b > a) {
		std::cout << "el mayor es: \n" << c; std::cout << "\n";
		std::cout << "el menor es: \n" << a;
		std::cout << "\n";
	}
	if (c > a&& a > b) {
		std::cout << "el mayor es: \n" << c; std::cout << "\n";
		std::cout << "el menor es: \n" << b;
		std::cout << "\n";
	}

}
