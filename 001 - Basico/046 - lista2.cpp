#include <iostream>
#include <stdlib.h>
#include <list>


using namespace std;

/*
A lista funciona como uma ideia de lista funcional. Posso inserir e retirar elementos
tanto pela frente quanto por tras


 */


/* 



 */

int main(int argc, char *argv[]) {
	
	//list<int> aula(5,50);  declarei uma lista com 5 posicoes, e dessas 5 
	/*posicoes ja vai ter o valor 50  */
	
	list<int> aula;
	int tam;
	list<int>::iterator it;
	
	tam = 10;
	for(int i = 0; i < tam; i++){
		aula.push_front(i);
	}
	
	it = aula.begin();
	advance(it, 7);
	
	aula.insert(it, 0); // insere na lista
	
	cout << "Tamanho da lista: " << aula.size() << "\n\n";
	
	tam = aula.size();
	for(int i = 0; i < tam; i++){
		cout << aula.front() << "\n";
		aula.pop_front();
	}
	
	system("pause");
	
}

