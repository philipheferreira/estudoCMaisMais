#include <iostream>
#include <memory>
/* Usando a nova forma de POO para as operacoes, de forma mais pratica e dinamica.
Tambem ser a forma como todos usam hoje em dia */

class Carro{
	public:
		int velMax;
		int potencia;
		const char* nome;
		
		Carro(const char* n, int p): nome(n), potencia(p){ /*  */
			this -> nome = n; 
			this -> potencia = p;
			if( p < 100){
				this -> velMax = 120;
			}else 
			if( p < 200){
				this -> velMax = 220;
			}else{
				this -> velMax = 350;
			}
		}
};

using namespace std;

int main() {
	
	unique_ptr<Carro>c1(new Carro{"Brunoo", 85}) /* Nao preciso mais usar a declaraco com o New para
	instanciar o novo objeto. Estou utilizando a inicializacao uniforme  */
	
	cout << "Informacoes do objeto carro instanciado: " << endl;
	cout << c1 -> nome << endl; /* Nao precisa usar o seta, seta usa com o new,
	agora posso utilizar o ponto */
	cout << c1 -> potencia << endl;
	cout << c1 -> velMax << endl;
	
	/* Como o new nao esta sendo usado, nao preciso mais do delete */
}