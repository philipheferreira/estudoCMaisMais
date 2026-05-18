#include <iostream>
#include <stdlib.h>

using namespace std; 

int main() { 
	
	int comandoEscolha; 
	
	/*
	< => menor que
	> => Maior que
	
	if(comandoEscolha == 1) / if(comandoEscolha)
	if(comandoEscolha == 0) / if(!comandoEscolha)
	if(comandoEscolha != 1) / if(!comandoEscolha)
	
	 */
	comandoEscolha = 11;
	
	if( (comandoEscolha > 0 && comandoEscolha< 10) || (comandoEscolha >= 10 && comandoEscolha <= 20) ){
		cout << "\n\nValor Aceito.\n\n";
	} else {
		cout << "\n\nNao Aceito.\n\n";
	}
	
	system("pause");
}





