#include <iostream>
#include <stdlib.h>

using namespace std; 

int main() { 
	
	/* goto vai ser um comando que direciona para a pessoa para um labou
	especifico, no caso um ponto de parada. Parecido com a funcionalidade do 
	do while em funcionamento, so que com chamada e organizacao diferente*/
	
	int notaDaPrimeiraProva, notaDaSegundaProva, resultadoDasProvas;
	char valorGoToTrigger; /* variavel para receber valor para ativar
	go to */
	
	inicio: /* definicao do ponto de labou para voltar, utilizando a pergunta do
	 go to como gatilho para receber o valor para voltar*/
	
	cout << "Digite o valor da primeira prova: ";
	cin >> notaDaPrimeiraProva;
	
	cout << "\nDigite o valor da segunda prova: ";
	cin >> notaDaSegundaProva;
	
	resultadoDasProvas = notaDaPrimeiraProva + notaDaSegundaProva;
	
	if(resultadoDasProvas >= 60) {
		cout << "Voce foi aprovado\n";
	}else 
	if(resultadoDasProvas >= 40){
		cout << "Aluno em recuperacao\n";
	}else{
		cout << "Aluno Reprovado.\nValor da primeira nota da prova foi " << notaDaPrimeiraProva << ", valor da segunda " << notaDaSegundaProva << ".\nO resultado da soma das provas foi " << resultadoDasProvas << ", no caso foi insuficiente.\n\n"; 
	}
	
	cout << "\nDigitar outras notas? [s/n]: ";
	cin >> valorGoToTrigger; // receber possivel valor para usar o go to
	
	if(valorGoToTrigger == 's' or valorGoToTrigger=='S'){
		goto inicio; // ir para o ponto labou declarado logo a cima
	}
	
	system("pause");
}





