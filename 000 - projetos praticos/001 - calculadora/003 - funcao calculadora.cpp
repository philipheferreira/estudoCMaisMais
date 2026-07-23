#include<iostream>
#include<stdlib.h>
#include<locale.h>

using namespace std;

int funcaoReceberValorPrimeiroNumeroOperacoes(){
	int numero1;
	cout << "Digite um valor para o numero 1: " << endl;
	cin >> numero1;
	return numero1;
}

int funcaoReceberValorSegundoNumeroOperacoes(){
	int numero2;
	cout << "Digite um valor para o numero 2: " << endl;
	cin >> numero2;
	return numero2;
}

int operacaoSoma(int numero1, int numero2){
	int resultadoSoma;
	
	resultadoSoma = numero1 + numero2;
	
	return resultadoSoma;
}

int operacaoSubtracao(int numero1, int numero2){
	return numero1 - numero2;
}

int operacaoMultiplicacao(int numero1, int numero2){
	return numero1 * numero2;
}

float operacaoDivisao(float numero1, float numero2){
	return (float)numero1 / (float)numero2;
}

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int numero1, numero2, menu;
	int somaResultado, subtracaoResultado, multiplicacaoResultado;
	float divisaoResultado;
	
	int funcaoReceberValorPrimeiroNumeroOperacoes();
	int funcaoReceberValorSegundoNumeroOperacoes();
	
	
	do{
		
		cout << "1-Soma" << endl << "2-Subtracao" << endl << "3-Multiplicacao" << endl << "4-Divisao" << endl << "0-Sair" << endl;
		cin >> menu;
		
		if(menu == 1){
			
			numero1 = funcaoReceberValorPrimeiroNumeroOperacoes();
			
			numero2 = funcaoReceberValorSegundoNumeroOperacoes();
			
			somaResultado = operacaoSoma(numero1, numero2);
			
			cout << "O valor da soma do numero " << numero1 << " e o numero " << numero2 << "e igual a " << somaResultado << endl;
			system("pause");
			system("cls");
		}else
		
		if(menu == 2){
			
			numero1 = funcaoReceberValorPrimeiroNumeroOperacoes();
			
			numero2 = funcaoReceberValorSegundoNumeroOperacoes();
			
			subtracaoResultado = operacaoSubtracao(numero1, numero2);
		
			cout << "O valor da subtracao do numero " << numero1 << " e o numero " << numero2 << "e igual a " << subtracaoResultado << endl;
			
			system("pause");
			system("cls");
		}else 
		if( menu == 3){
			
			numero1 = funcaoReceberValorPrimeiroNumeroOperacoes();
			
			numero2 = funcaoReceberValorSegundoNumeroOperacoes();
			
			multiplicacaoResultado = operacaoMultiplicacao(numero1, numero2);
		
			cout << "O valor da Multiplicação do numero " << numero1 << " e o numero " << numero2 << " será igual a " << multiplicacaoResultado << endl;
			
			system("pause");
			system("cls");
		}else 
		if( menu == 4){
			
			numero1 = funcaoReceberValorPrimeiroNumeroOperacoes();
			
			numero2 = funcaoReceberValorSegundoNumeroOperacoes();
			
			divisaoResultado = operacaoDivisao(numero1, numero2);
		
			cout << "O valor da Divisao do numero " << numero1 << " e o numero " << numero2 << "e igual a " << divisaoResultado << endl;
			
			system("pause");
			system("cls");
		}
	
	}while(menu !=0);
}