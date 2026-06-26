#include <iostream>

/* Usando a nova forma de POO para as operacoes, de forma mais pratica e dinamica.
Tambem ser a forma como todos usam hoje em dia */

class Carro{
	public:
		int velMax;
		int potencia;
		const char* nome;
		
		/* Agora posso criar metodos dentro da classe, como os metodos
		estao dentro da classe nao preciso referenciar a classe que elas 
		fazem parte e nem declarar o metodo dentro da classe que ela faz
		referencia por estar dentro */
		Carro(const char* n, int p){ /* esse ser um constructor que foi declarado */
			this -> nome = n; /* Funciona sem o this */
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
	
	Carro *c1 = new Carro("Bruno", 300); /* Instanciado um objeto, posso colocar
	parametros dentro da instancia criada. Assim o constructor tem o trabalho
	de definir onde os valores vao entrar. */
	
	cout << "Informacoes do objeto carro instanciado: " << endl;
	cout << c1 -> nome << endl;
	cout << c1 -> potencia << endl;
	cout << c1 -> velMax << endl;
	
	delete c1;
}