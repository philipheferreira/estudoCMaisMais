#include <iostream>
#include <stdlib.h>
#include <stack> /* Adiciona a funcionalidade de pilha ao codigo da biblioteca
pre definida em c */

using namespace std;

/* Pilha: Pilha ser uma logica de funcionamento de um elemento.
Trabalhar que eu tenho uma pilha de funcionamento. No caso, como se eu
tivesse uma pilha de cartas, quando eu coloco uma pilha de cartas eu 
sempre adiciono um elemento no top de um baralho de cartas. Ou seja, o primeiro
elemento que eu colocar vai ficar no fim da pilha para retirada dele, porque
a primeira carta a ser adicionada no baralho fica la em baixo. E quanto eu
quiser retirar uma carta eu so posso tirar do topo, como em um baralho de cartas.
Entao a ultima carta que eu adicionei ao topo sera a primeira a sair, e a primeira
carta que eu coloquei no baralho sera a ultima a sair pois esta mais distante do
topo */

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

	
	cout << "Tamanho da pilha: " << cartas.size() << ".\n"; /* Comando size serve para mostrar o tamanho da pilha */
	
	cout << "Carta do topo: " << cartas.top() << "\n\n\n"; /* Mostra a carta no topo da pilha*/
	
	cartas.pop(); /* Comando para tirar um elemento da pilha, como estamos trabalhando
	com uma pilha sempre sera o ultimo elemento inserido, ou seja, o que se localiza 
	no topo */
	cartas.pop();
	
	cout << "Nova carta do topo: " << cartas.top() << "\n";
	cout << "Novo tamanho da pilha: " << cartas.size() << ".\n\n";
	system("pause");
	
}

