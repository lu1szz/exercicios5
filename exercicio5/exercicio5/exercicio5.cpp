#include <iostream>
#include <locale>


using namespace std;
int main() {
	//DEFINIR LOCALIDE PARA ACEITAR ACENTOS
	locale::global(locale("pt_BR.UTF-8"));

	/*LAÇOS DE REPETIÇÃO - TEMOS TRÊS TIPOS DE LAÇO -WHILE -DO...WHILE -FOR*/

	//MOSTRAR OS NÚMEROS DE 1 A 10
	/*int numero = 1;
	while (numero <= 10) {
		cout << numero;
		numero += 1;
	}*/

	//Peça para o usuário informar um número e mostre a tabuada desse valor
	/*int tab1;
	cout << "Informe um número: ";
	cin >> tab1;
	for (int j = 1; j <= 10; j++) {
		int resultado = tab1 * j;	
		cout << tab1 << "x" << j << "=" << resultado << "\n";
	}*/

	//Faça um programa que mostre os números de 0 a 50, mostrando - os de 5 em 5 (ex: 0, 5, 10, 15...)
	/*int numero = 0;
	do {
		cout << numero << "";
		numero += 5;
	} while (numero <= 50);
	*/

	//Escreva um programa que lê o número digitado pelo usuário cinco vezes e mostre
	//	- Se o número for maior que 100, escreva “NÚMERO ESPECIAL”	
	//	- Senão, escreva “NÚMERO COMUM”
	/*int n = 100;
	int tentativa;

	for (int i = 0; i < 5; ++i) {
		cout << "Tente adivinhar o número: ";
		cin >> tentativa;

		if (tentativa > n) {
			cout << "Número Especial\n";
		}else if (tentativa < n) {
				cout << "Número comum\n";
				
			}
		
	}*/
	
	//Mostre a sequência de números de 1 a 31 pulando de 2 em 2 (ex: 1, 3, 5, 7...)
	/*int numero = 1;
	while (numero <= 31) {
		cout << numero;
		numero += 2;
	}*/

	/*Faça um programa que leia cinco números e mostre:
	-Se o número for maior que zero, escreva “NÚMERO POSITIVO”
		- Senão, se o número for menor que zero, escreva “NÚMERO NEGATIVO”
		- Senão, escreva “O NÚMERO É ZERO”*/
	int n = 0;
	int tentativa;

	for (int i = 0; i < 5; ++i) {
		cout << "Tente adivinhar o número: ";
		cin >> tentativa;

		if (tentativa > n) {
			cout << "Número Positivo\n";
		}
		else if (tentativa < n) {
			cout << "Número negativo\n";
		}
		if (tentativa == n) {
			cout << "Número é zero\n";
		}
	}

}