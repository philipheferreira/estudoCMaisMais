#include <iostream>
#include <stdlib.h>
#include <queue> /* Adicionar a biblioteca para as operacoes de fila*/

using namespace std;

/*

A ideia da fila, que assim como uma fila normal o primeiro que entra na
fila vai ser o primeiro a sair. Diferente da pilha que o primeiro a entrar
sera o ultimo a sair.

 */


/* 

empty => verifica se a fila esta vazio
size => mostra o tamanho da fila
front => Mostra a carta que esta na frente da fila, o primeiro
back => mostra quem esta atras da fila, o ultimo elemento da fila
push
pop => remove a carta que esta na frente da fila

 */

int main(int argc, char *argv[]) {
	
	queue <string> cartas;
	
	cartas.push("Rei de Copas"); /* Git push vai funcionar do mesmo jeito como na pilha
	O primeiro a entrar ficara na primeira posicao, so que como e uma fila, ele vai
	ser o primeiro a sair. Em uma pilha esse seria o ultimo */
	cartas.push("Rei de Espadas");
	cartas.push("Rei de Ouros");
	cartas.push("Rei de Paus");
	
	cout << "Tamanho da fila: " << cartas.size() << "\n";
	cout << "Primeira Carta: " << cartas.front() << "\n";
	cout << "Ultima Carta: " << cartas.back() << "\n"; 
	
	cout << "\n\nO item a ser tirado da fila sera o seguinte: " << cartas.front() << ".\n";
	cartas.pop(); /* O pop tambem vai tirar uma carta, assim como na pilha. So que
	na pilha era o ultimo colocado na pilha e nao o primeiro da pilha. Como ser
	uma fila, o primeiro a ser colocado na filha sera o retirado */
	
	cout << "\n\nO item a ser tirado da fila sera o seguinte: " << cartas.front() << ".\n";
	cartas.pop();
	
	system("pause");
	
}

