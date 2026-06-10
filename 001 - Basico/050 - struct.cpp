#include <iostream>
#include <stdlib.h>

using namespace std;

/*
A lista funciona como uma ideia de lista funcional. Posso inserir e retirar elementos
tanto pela frente quanto por tras


 */

struct carro{
	string nome;
	string cor;
	int pot;
	int velMax;
};


/* 



 */

int main(int argc, char *argv[]) {
	
	carro car1;
	carro car2;
	
	car1.nome = "Tornado";
	car1.nome = "Vermelho";
	car1.nome = 450;
	car1.velMax = 350;
	
	car2.nome = "Tornado";
	car2.nome = "Vermelho";
	car2.nome = 450;
	car2.velMax = 350;
	
	cout << "Nome.............: " << car1.nome << "\n";
	cout << "Cor..............: " << car1.cor << "\n";
	cout << "Potencia.........: " << car1.pot << "\n";
	cout << "Velocidade Maxima: " << car1.velMax << "\n";
	
	cout << "Nome.............: " << car2.nome << "\n";
	cout << "Cor..............: " << car2.cor << "\n";
	cout << "Potencia.........: " << car2.pot << "\n";
	cout << "Velocidade Maxima: " << car2.velMax << "\n";
	
	system("pause");
	
}

