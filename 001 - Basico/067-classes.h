#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

class Veiculo{
	public:
		int vel;
		int blind;
		int rodas;
		void setTipo(int tp);
		void setVelMax(int vm);
		void setArma(bool ar);
		void imp();
    private: /* Propriedades privadas so podem ser manipuladas dentro da classe
	Veiculo */
    	int tipo; // 1 = moto 2 = Carro 3 = Caminhao 4= Tanque
    	int velMax;
    	bool arma;
};

void Veiculo::imp(){
	std::cout << "Tipo veiculo.....: " << tipo << std::endl;
	std::cout << "Velocidade Maxima: " << velMax << std::endl;
	std::cout << "Qtde rodas.......: " << rodas << std::endl;
	std::cout << "Blindagem........: " << blind << std::endl;
	std::cout << "Armamento........: " << arma << std::endl;
	std::cout << "------------------------------" << std::endl;
}

void Veiculo::setTipo(int tp){
	tipo = tp;
}

void Veiculo::setVelMax(int vm){
	velMax = vm;
}
void Veiculo::setArma(bool ar){
	arma = ar;
}

class Moto:public Veiculo{ /* Informando que estou criando uma nova classe
que herda todas as caracteristicas da classe Veiculo, logo tudo que ser
publico e privado e metodos de Veiculo existem dentro de moto */
	public:
		Moto(); /* Declaracao de metodo publico */
};

Moto::Moto(){ /* Metodo declarado para ser utilizado por moto. Como o metodo 
foi declarado dentro de classe Moto, quando a classe Moto for criada ela
inicia esse metodo automaticamente permitindo ser inicializado */
	vel = 0;
	blind = 0;
	rodas = 2;
	setTipo(1);
	setVelMax(120);
	setArma(false);
}

class Carro: public Veiculo{
	public:
		Carro();
};

Carro::Carro(){
	vel = 0;
	blind = 0;
	rodas = 4;
	setTipo(2);
	setVelMax(180);
	setArma(false);
}

class Tanque:public Veiculo{
	public:
		Tanque();
};

Tanque::Tanque(){
	vel = 0;
	blind = 1;
	rodas = 8;
	setTipo(4);
	setVelMax(200);
	setArma(true);
}


#endif