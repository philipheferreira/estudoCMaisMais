
#include<iostream>
#include<locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int numero1, numero2;
	int soma, subtracao, multiplicacao;
	float divisao;
	
	cout << "Digite um valor para o numero 1:" << endl;
	cin >> numero1;
	
	cout << "Digite um valor para o numero 2:" << endl;
	cin >> numero2;
	
	cout << "O valor " << numero1 << " e " << numero2 << endl;
	
	soma = numero1 + numero2;
	
	cout << "O valor da soma do numero " << numero1 << " e o numero " << numero2 << " será igual a " << soma << endl;
	
	subtracao = numero1 - numero2;
	
	cout << "O valor da subtração do numero " << numero1 << " e o numero " << numero2 << " será igual a " << subtracao << endl;
	
	multiplicacao = numero1 * numero2;
	
	cout << "O valor da Multiplicação do numero " << numero1 << " e o numero " << numero2 << " será igual a " << multiplicacao << endl;
	
	divisao = ((float)numero1/ (float)numero2);
	
	cout << "O valor da divisão do numero " << numero1 << " e o numero " << numero2 << " será igual a " << divisao << endl;
	
}