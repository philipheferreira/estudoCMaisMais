#include <iostream>
#include <stdlib.h>

using namespace std; 

/* Comando Break geralmente usado em conjunto com o comando switch e case pode
ser usado em cenarios que nao precise deles. O objetivo dele vai ser de
encerrar a operacao quando o codigo passar por ele, com o objetivo de
evitar que o sistema tenha um problema maior, projetado pelo programador. 
Seria uma saida programada pelo desenvolvedor sobre alguma situacao
especifica */
int main() { 
	
	int contador = 0;
	
	while(contador < 300) {
		cout << contador << "\n";
		
		if(contador == 200){
			cout << "A repetição foi quebrada\n";
			break;
		}
		contador++;
	}
	
	system("pause");
}


