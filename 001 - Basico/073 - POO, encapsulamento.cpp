#include <iostream>

/* O encapsulamento sera a nossa tecnica de proteger as nossas classes. O encapsulamento
vai ser proteger as propriedades das variaveis dentro da nossa classe, nos 
utilizando das classes de private, protect e public para proteger dados mais 
sigilosos */

class Carro{
	private:
		int velMax;
		void setVelMax(int vm){ /* Como o metodo set vai ser de modificacao
		ele necessita ser private para isso */
			this -> velMax = vm;
		}
 	    
    public:
    	int potencia;
    	const char* nome;

		int getVelMax(){
			return this -> velMax;
		}
		
		Carro(const char* n, int p): nome(n), potencia(p){ 
			if( p < 100){
				this -> setVelMax(120);
			}else 
			if( p < 200){
				this -> setVelMax(220);
			}else{
				this -> setVelMax(350);
			}
		}
};

using namespace std;

int main() {
	
	Carro c1("Bruno", 300); /* Nao preciso mais usar a declaraco com o New para
	instanciar o novo objeto. Estou utilizando a inicializacao uniforme  */
	
	cout << "Informacoes do objeto carro instanciado: " << endl;
	cout << c1.nome << endl; /* Nao precisa usar o seta, seta usa com o new,
	agora posso utilizar o ponto */
	cout << c1.potencia << endl;
	cout << c1.getVelMax() << endl;
	//cout << c1.velMax << endl;
	
	
}