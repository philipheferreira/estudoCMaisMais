#include <iostream>
#include <stdlib.h>
#include <stack> 

using namespace std;



/* Comandos usaveis dentro de pilha:
	push() => adiciona um novo elemento ao topo da pilha
	pop() => Retira um elemento do topo da pilha
	top() => verifica o valor do elemento no topo da pilha
	size() => comando para ser usado para verificar o tamanho da pilha
	empty() => verifica ou agi quando a pilha esta vazia quando usado
	em um parametro de condicional. Em questao de funcionalidade tem o 
	mesmo valor que size() == 0. exemplo: if(cartas.size() == 0).

 */

int main(int argc, char *argv[]) {
	
	stack <string> cartas;
	
	cartas.push("Rei de Copas"); /* O comando push serve para adicionar novos elementos a pilha*/
	cartas.push("Rei de Espadas");
	cartas.push("Rei de Ouros");
	cartas.push("Rei de Paus");
	
	if(cartas.empty()){
		cout << "Pilha Vazia.\n\n";
	}else{
		cout << "Pilha com cartas.\n\n";
	}
	
	/* Exemplo do que pode ser usado com cartas empty, usarei o comando para esvaziar o baralho */
	
	while (!cartas.empty()){
		cout << "O tamanho da pilha atualmente é "<< cartas.size() << "antes de tirar a carta: " << cartas.top() << "\n";
		cartas.pop();
		cout << "Agora o tamanho da pilha é: "<< cartas.size() << "\n\n";
	}
	
	if(cartas.empty()){
		cout << "Pilha Vazia.\n\n";
	}else{
		cout << "Pilha com cartas.\n\n";
	}
	
	system("pause");
	
}

