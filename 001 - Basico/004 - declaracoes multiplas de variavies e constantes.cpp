#include <iostream>
#include <stdlib.h>

/* A constante que sera declarado e utilizada sera declarada fora da funcao
principal main, sou seja, ela sera uma variavel global, que podera ser
acessada durante todo o programa. O que diferencia a variavel de uma constante.
A variavel pode ter seu valor alterado, nao significa que ela obrigatoriamente
tera seu valor alterado durante o programa, mas existe a possibilidade
de alterar. A constante nao, permanece o mesmo valor apos declarado, independente
de qualquer tentativa. O define pode criar constante e armazenar 
valores fixos inalterados dentro, assim como pode salvar acoes, funcoes ou
metodos */

#define pi 3.1415 /* tipo nome valor */
#define mostrarFrasePreDefinida cout << "Estou mostrando uma frase pre-definida para o usuario visualizar\n\n";

using namespace std; 

int main() { 
	   /* Ressaltando que tudo o que foi feito ate o momento foi utilizando
	   variaveis locais */	
	int vidas = 3, tiros = 500, life = 100;
	
	cout << pi << "\n\n";
	/* Os dois defines foram declarados globalmente, entao podem ser chamados
	tanto dentro de um cout quanto normamlmente dentro da funcao principal */
	mostrarFrasePreDefinida
	
	system("pause");
}

