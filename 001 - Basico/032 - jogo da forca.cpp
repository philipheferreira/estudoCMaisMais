#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	
	char palavra[30], letra[1], secreta[30];
	int tamanho, i, chances, acertos;
	bool acerto;
	
	
	chances = 6; /* sempre vou ter 6 chances fixas*/
	tamanho = 0;
	i = 0;
	acerto = false;
	acertos = 0;
	
	cout << "Bom dia, certifiquesse que seu amigo nao ira ver. Digite a palavra secreta: " ;
	cin >> palavra;
	system("cls");
	
	while(palavra[i] != '\0'){ /* Esse codigo faz o mapeamento da palavra digitada. Enquanto o valor foir diferente de \0 que representa o caracter
	invisivel que fica atras de toda palavra sera adicionado +1 valor em i e tamanho. Assim vai ser repassado o valor do tamanho da palavra exatada
para ambos esses elementos */
		i++;
		tamanho++;
	}
	
	for(i = 0; i < 30; i++){ /* dentro de secreto, sera adicionando os -, usando 
	o tamanho de i que vai ser a mesma extensao do tamanho da palavra digitada */
		secreta[i] = '-';
	}
	
	while((chances > 0) && (acertos < tamanho)){
		
		cout << "Chances restantes: " << chances << "\n\n";
		cout << "Palavra secreta: ";
		
		for(i = 0; i < tamanho; i++){
			
			cout << secreta[i]; /* Aqui sera mostrada a palavra com os tracos - */
			
		}
		
		cout << "\n\nDigite uma letra: ";
		cin >> letra[0];
		
		for(i = 0; i < tamanho; i++){
			if(palavra[i] == letra[0]){ /* Faz mapeamento da palavra digitada */
				acerto = true;
				secreta[i] = palavra[i]; /* passa a exata palavra para a secrete no ponto que ela foi encontrada */
				acertos++; /* soma com acertos feitos */
			}
		}
		if(!acerto){
			chances--; /* se nao acertar, perco uma das chances */
		}
		acerto = false;
		system("cls");
		
	}
	
	if(acertos == tamanho) {
		cout << "Voce venceu! ";
	} else {
		cout << "Que pena, voce perdeu!";
	}
	
	system("pause");
	
}