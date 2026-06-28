#include <iostream>
#include <stdlib.h>


/* Heranca: Basicamente quando eu crio uma classe que herda caracteristicas
de outra classe  */

/* Virtual: O virtual sera utilizado junto com o override. O objetivo que 
o virtual vai ser definido na classe que vai passar sua heranca para a outra
classe. dentro de um metodo na classe pai eu vou definir o virtual na frente
do metodo para realizar as operacoes. Assim sinalizando que essa classe, caso
exista essa mesma em uma classe que esta recebendo essa heranca, ela sera 
substituida por essa outra classe com o mesmo nome na classe que estiver 
recebendo a heranca */

/* Override: O Override sera utilizado junto com o virtual. O override sera
definido na classe que receber a heranca. Caso exista um metodo do mesmo nome
nessa classe, o mesmo metodo existe na classe de origem, so que eu quero utilizar
o metodo da classe que recebe a heranca e nao da de origem. O override significa
que vou utilizar a classe que esta com o mesmo metodo definido na classe que 
recebe a heranca. Ou seja, o metodo que tem o mesmo nome do metodo dentro da 
origem sera sobreescrito pelo metodo da classe que recebe a heranca */

using namespace std;

class Veiculo{
	private:
		const char* nome;
		const char* cor;
    public:
    	int velMax;
    	int rodas;
    	
    	void setNome(const char* no){
			nome = no;
		}
		
		const char* getNome(){
			return nome;
		}
		
		void setCor(const char* co){
			cor = co;
		}
		
		const char* getCor(){
			return cor;
		}
		
		virtual void imp(){ /* Quando tiver o virtual, significa que esse metodo
		sera sobescrito em alguma classe que herdar essa classe veiculo */
			cout << "Nome.................: " << nome << endl;
			cout << "Cor..................: " << cor << endl;
			cout << "Rodas................: " << rodas << endl;
			cout << "Vel.Max..............: " << velMax << endl;
		}
};

class Carro:public Veiculo{
	public:
		Carro(){
			velMax = 160;
			rodas = 4;
			setNome("Carro");
			setCor("Branco");
		}
};

class Moto:public Veiculo{
	public:
		Moto(){
			velMax = 200;
			rodas = 2;
			setNome("Moto");
			setCor("Preto");
		}
};

class Militar:public Veiculo{
	public:
		int monicao;
		bool armamento;
		Militar(bool arma, int mo):armamento(arma), monicao(mo){
			velMax = 150;
			rodas = 6;
			setNome("Tanque");
			setCor("Verde");
			
			if(arma){
				monicao = mo;
			}else{
				monicao = 0;
			}
		}
		/* Caso eu tente acessar variaveis privadas eu nao irei conseguir */
		void imp(){ /* aqui vai ter que ficar o override assim:  void imp() override{
		O problema que como estou usando um compilador antigo ele nao entende o 
		funcionamento de algo mais atual assim*/
			cout << "Nome.................: " << getNome() << endl;
			cout << "Cor..................: " << getCor() << endl;
			cout << "Rodas................: " << rodas << endl;
			cout << "Vel.Max..............: " << velMax << endl;
			cout << "Armamento............: " << armamento << endl;
			cout << "Monicao..............: " << monicao << endl;
		}
};

int main() {
	
	Carro v1;
	v1.imp();
	
	Moto v2;
	v2.imp();
	
	Militar v3(false, 200);
	v3.imp();
	
	Militar v4(true, 100);
	v4.imp();
	
	system("pause");
	
}