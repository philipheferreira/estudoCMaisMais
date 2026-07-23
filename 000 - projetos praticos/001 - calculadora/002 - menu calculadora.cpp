#include<iostream>
#include<stdlib.h>
#include<locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int numero1, numero2, menu;
	int soma, subtracao, multiplicacao;
	float divisao;
	
	do{
		
		cout << "1-Soma" << endl << "2-Subtracao" << endl << "3-Multiplicacao" << endl << "4-Divisao" << endl << "0-Sair" << endl;
		cin >> menu;
		
		if(menu == 1){
			cout << "Digite um valor para o numero 1:" << endl;
			cin >> numero1;
			
			cout << "Digite um valor para o numero 2:" << endl;
			cin >> numero2;
			
			cout << "O valor " << numero1 << " e " << numero2 << endl;
			
			soma = numero1 + numero2;
		
			cout << "O valor da soma do numero " << numero1 << " e o numero " << numero2 << " será igual a " << soma << endl;
			
			system("pause");
			system("cls");
		}else
		
		if(menu == 2){
			cout << "Digite um valor para o numero 1:" << endl;
			cin >> numero1;
			
			cout << "Digite um valor para o numero 2:" << endl;
			cin >> numero2;
			
			cout << "O valor " << numero1 << " e " << numero2 << endl;
			
			subtracao = numero1 - numero2;
		
			cout << "O valor da subtração do numero " << numero1 << " e o numero " << numero2 << " será igual a " << subtracao << endl;
			
			system("pause");
			system("cls");
		}else 
		if( menu == 3){
			cout << "Digite um valor para o numero 1:" << endl;
			cin >> numero1;
			
			cout << "Digite um valor para o numero 2:" << endl;
			cin >> numero2;
			
			cout << "O valor " << numero1 << " e " << numero2 << endl;
			
			multiplicacao = numero1 * numero2;
		
			cout << "O valor da Multiplicação do numero " << numero1 << " e o numero " << numero2 << " será igual a " << multiplicacao << endl;
			
			system("pause");
			system("cls");
		}else 
		if( menu == 4){
			cout << "Digite um valor para o numero 1:" << endl;
			cin >> numero1;
			
			cout << "Digite um valor para o numero 2:" << endl;
			cin >> numero2;
			
			cout << "O valor " << numero1 << " e " << numero2 << endl;
			
			divisao = ((float)numero1/ (float)numero2);
		
			cout << "O valor da divisão do numero " << numero1 << " e o numero " << numero2 << " será igual a " << divisao << endl;
			
			system("pause");
			system("cls");
		}
	
	}while(menu !=0);
}