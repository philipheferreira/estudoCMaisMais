#include <iostream>
#include "068 - classes.h"

using namespace std;

int main(int argc, char** argv){
	
	Base1 *obj1 = new Base1(); /* Instancia um objeto */
	Base2 *obj2 = new Base2(); /* Instancia um objeto */
	CFB *obj3 = new CFB();
	
	obj1 -> impBase1();
	obj2 -> impBase2();
	
	cout << endl;
	
	obj3 -> impBase1(); /* esse objeto tem o metodo dentro da primeira classe */
	obj3 -> impBase2(); /* esse objeto tem o metodo dentro da segunda classe */
	
}