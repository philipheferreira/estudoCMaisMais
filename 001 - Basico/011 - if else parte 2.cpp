#include <iostream>
#include <stdlib.h>

using namespace std; 

int main() { 
	
	/* Assim como no incremento e decremento tem como alterar o valor das variaveis
	de forma rapida com relacao ao sinal. Se em um momento ele for positovo,
	consigo inverter o valor rapidamente para negativo, e vice e versa */
	
	int notaDaPrimeiraProva, notaDaSegundaProva, resultadoDasProvas;
	
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
	
	system("pause");
}





