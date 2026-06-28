#include <iostream>
#include <stdlib.h>


/* 

private:
So pode ser acessado dentro da propria classe. Se eu tentar acessar o private
fora da classe original sera negado


protected: Parece com o private no quesito bloquear acesso, entretanto ele 
permite acesso para classes que herdarem as informacoes da classe de origem,
permitindo o uso das informacoes dentro da classe de origem e qualquer uma
das que herdaram ela. Proibe acesso de qualquer uma que nao seja a classe de 
origem ou as herdadas dela

public:
Tudo que for public pode ser acessado por dentro da classe ou fora da classe.
Por membros herdados ou por quando essa classe for utilizada


 */


using namespace std;

class Veiculo{
	private:
		int velMax;
		int potencia;
    public:
    	int rodas;
    	const char* nome;
 	protected:
 		int portas;
 		const char* cor;
};

class Carro:public Veiculo{
public:	
	Carro(){
		//velMax = 180; 
		/* velMax uma variavel privada, logo nao vai funcionar o acesso a essa
		variavel*/
		//potencia = 150;
		/* potencia uma variavel privada, logo nao vai funcionar o acesso a essa
		variavel */
		rodas = 4;
		nome = "Carro";
		portas = 4;
		cor = "Vermelho";
		
		//cout << velMax << endl; 
		/* Para o codigo rodar preciso utilizar velMax comentanda pois ser uma 
		variavel privada, logo vai dar erro */
		//cout << potencia << endl;
		/* Para o codigo rodar preciso utilizar potencia comentanda pois ser uma 
		variavel privada, logo vai dar erro */
		cout << rodas << endl;
		cout << nome << endl;
		cout << portas << endl;
		cout << cor << endl;
		
	}
	
};

class Moto{
	public:
		Carro c;
		Moto(){
			//c.velMax = 250;
			//c.potencia = 500;
			c.rodas = 2;
			c.nome = "Moto";
			//c.portas = 0;
			//c.cor = "preto";
			
			//cout << c.velMax << endl;
			//cout << c.potencia << endl;
			cout << endl << endl << c.rodas << endl;
			cout << c.nome << endl;
			//cout << c.portas << endl;
			//cout << c.cor << endl;
		}
};

int main() {
	
	Carro v1;
	cout << endl << endl;
	Moto v2;
	system("pause");
	
}