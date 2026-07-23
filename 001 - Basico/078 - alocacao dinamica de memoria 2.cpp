#include <iostream>
#include <stdio.h> // Para funcao gets


/* 
	Sera adicionado uma nova biblioteca para  o gets que ser a stdio.h
	Sera utilizado o gets para salvar qualquer informacao completa
	digitada para a variavel receber.
 */


using namespace std;



int main() {
	
	char vnome[50];
	
	gets(vnome);
	
	cout << vnome;
	
	
}