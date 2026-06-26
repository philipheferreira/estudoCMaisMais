#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

/* Eu tenho a necessidade de criar um metodo pra poder manipular os elementos
privados pois eles so podem ser manipulados pela classe. No caso para manupular
a velocidade no conceito de alterar o valor */

class Veiculo{
	public:
		int vel;
		int tipo;
		Veiculo(int tp); /* Construtor: Metodo chamado automaticamente quando
		estancio essa classe. Estanciei um objeto e ai vou chamar ele. Esse metodo
		construtor tem um paramentro de entrada */
		int getVelMax();
		bool getLigado();
		void setLigado(int l);
    private:
    	void setVelMax(int vm);
		std::string nome;
		int velMax;
		bool ligado;
};

bool Veiculo::getLigado(){ /* Metodo que acessa a classe veiculo e printa o valor
da classe para vermos. Necessario pois como a variavel ligado ser privada eu
nao posso acessar o valor de forma direta, necessito de uma metodo com acesso a 
classe veiculo */
	return ligado;
}

void Veiculo::setLigado(int l){ /* Metodo que acessa a classe veiculo e muda o valor
da classe. Necessario pois como a variavel ligado ser privada eu nao posso 
acessar o valor de forma direta, necessito de uma metodo com acesso a classe 
veiculo */
	if(l == 1){
		ligado = true;
	}else 
	if(l == 0){
		ligado = false;
	}
}

int Veiculo::getVelMax(){
	   return velMax;	
}

void Veiculo::setVelMax(int vm){
	velMax = vm;
}

Veiculo::Veiculo(int tp){//1 = Carro 2 = Aviao 3 = Navio
/* Nas atribuicoes desse metodo podemos usar o metodo setVelMax ou atribuir 
diretamente o velMax, iso porque a propriedade sendo privada este metodo 
pertence a classe */
	tipo = tp;
	if(tipo == 1){
		nome = "Carro";
		setVelMax(200);
	}else 
	if(tipo == 2){
		nome = "Aviao";
		setVelMax(800);
	}else 
	if(tipo == 3){
		nome = "Navio";
		setVelMax(120);
	}
	setLigado(0);
}

#endif