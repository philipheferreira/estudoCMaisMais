#include <iostream>
#include <stdio.h>
#include<stdlib.h>

using namespace std;

/*  */

/*  */

int main(int argc, char *argv[]) {
	
	int ano;
	char nome[20];
	
	
	printf("Digite seu Nome: ");
	scanf("%s", &nome);
	printf("\nInforme o ano do seu nascimento: ", ano);
	scanf("%i", &ano);
	printf("\nNome: %s\nAno de nascimento: %i\n", nome, ano);
	
	system("pause");
	
}

