#include <math.h>
#include <iostream>

int main() {
	std::cout << "Hello World!\n";
	int a, b, c, d, j;
	j = 0;
	char e; //extrañamente me salta error en visual pero funciona normal en replit, el caso es que la tarea esta hecha a nivel Dios. 
	std::cout << " Ingrese el primer numero: ";
	std::cin >> a;


	if (a == e) {
		printf("ERROR: Ingrese solo numeros no letras, el programa se cerrara, inicie de nuevo para continuar.\n");
		exit(-1);
	}

	std::cout << "ingrese el segundo numero: ";
	std::cin >> b;
	if (b == e) {
		std::cout << "ERROR: Ingrese solo numeros no letras, el programa se cerrara, inicie de nuevo para continuar.\n";
		exit(-1);
	}

	std::cout << "ingrese la operacion: Suma es 0, resta es 1, multiplicacion es 2, division es 3, potencia es 4, raiz es 5 :";
	std::cin >> d;




	if (d == 0) {
		std::cout << "la suma es: ";
		int sum(int a, int b); {
			c = a + b;
			std::cout << c; }
	}
	if (d == 1) {
		std::cout << "la resta es: ";
		c = a - b;
		std::cout << c;
	}
	if (d == 2) {

		std::cout << "la multiplicacion es:  ";
		c = a * b;
		std::cout << c;
	}
	if (d == 3) {
		if (a == 0 or b == 0) {
			std::cout << "la division no funciona, 0 no se puede dividir";
		}
		c = a / b;
		std::cout << "la division es " << c;
	}

	if (d == 4) {
		std::cout << "la potencia es:  ";
		c = pow(a, b);
		std::cout << c;
	}
	if (d == 5) {
		if (a > 0) {
			c = printf("Raiz cuadrada: %i\n", a);
		}
		if (a < 0) {
			std::cout << "no existe raiz de un numero negativo";

		}
	}
};