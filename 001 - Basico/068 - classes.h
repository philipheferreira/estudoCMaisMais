#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

class Base1{
	public:
		void impBase1();
};

void Base1::impBase1(){
	std::cout << "Imp Classe Base1" << std::endl;
}

class Base2 {
	public:
		void impBase2();
};

void Base2::impBase2(){
	std::cout << "Imp Classe Base2" << std::endl;
}

class CFB: public Base1, public Base2{ /* Passa todas as informacoes dentro da
primeira classe e da segunda para a class CFB */
	
};

#endif