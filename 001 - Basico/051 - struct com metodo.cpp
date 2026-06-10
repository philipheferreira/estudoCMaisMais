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
	int vel;
	
	void insere(string stnome, string stcor, int stpot, int stvelmax){
		nome = stnome;
		cor = stcor;
		pot = stpot;
		velMax = stvelmax;
		vel = 0;
	}
	
	void mostra(){
		cout << "Nome.............: " << nome << "\n";
		cout << "Cor..............: " << cor << "\n";
		cout << "Potencia.........: " << pot << "\n";
		cout << "velocidade atual.: " << vel << "\n";
		cout << "Velocidade Maxima: " << velMax << "\n\n";
	}
	
	void mudaVel(int mv){
		vel = mv;
		if(vel > velMax){
			vel = velMax;
		}
		if(vel < 0){
			vel = 0;
		}
	}
};


/* 



 */

int main(int argc, char *argv[]) {
	
	carro car1, car2;
	
	car1.insere("Tornado", "Vermelho", 450, 350);
	
	car2.insere("Luxo", "Preto", 150, 250);
	
	car1.mostra();
	
	car2.mostra();
	
	system("pause");
	
}

