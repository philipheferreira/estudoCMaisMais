#ifndef AVIAO_H_INCLUDED
#define AVIAO_H_INCLUDED

class Aviao{
	public:
		int vel;
		int velMax;
		std::string tipo; /* metodo que ira imprimir valores */
		Aviao(int tp); /* Como vai ser um metodo construtor ele sera o unico
		com o mesmo nome da classe. Nao sera necessario colocar void na frente
		porque como ele vai ser metodo construtor ele ja possue as caracteristicas
		de uma funcao. O construtor sera chamado assim que a classe for estanciada*/
		void imprimir(); /* funcao declarada dentro da classe aviao */
    private:
    	
};

Aviao::Aviao(int tp){ /* */
	if( tp == 1 ) {
		tipo = "Jato";
		velMax = 800;
	}else 
	if( tp == 2){
		tipo = "Monomotor";
		velMax = 350;
	}else 
	if( tp == 3) {
		tipo = "Planador";
		velMax = 180;
	}
}

void Aviao::imprimir(){ /* funcao criada direcionando para a classe Aviao */
	std::cout << "Tipo.............:" << tipo << std::endl;
	std::cout << "Velocidade Maxima:" << velMax << std::endl;
	std::cout << "Velocidade atual.:" << vel << std::endl;
}


#endif