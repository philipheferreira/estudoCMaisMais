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
	
	aula.push_front(8);
	aula.push_front(5);
	aula.push_front(3);
	aula.push_front(2);
	aula.push_front(1);
	aula.push_front(4);
	aula.push_front(7);
	aula.push_front(6);
	aula.push_front(9);
	aula.push_front(10);
	
	cout << "Tamanho da lista: " << aula.size() << "\n\n";
	
	tam = aula.size();
	for(int i = 0; i < tam; i++){
		cout << aula.front() << "\n";
		aula.pop_front();
	}
	
	system("pause");
	
}

