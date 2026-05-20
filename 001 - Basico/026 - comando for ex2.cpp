#include <iostream>
#include <stdlib.h>

using namespace std; 

/* */
int main() { 
	
	/*
		for(ini ; cond ; inc/dec){
			//comandos
		}
	 */
	
	int x, y, z;
	
	for(x = 0, y = 1, z = 0; x <= 10 && z <= 6; x++, y += 2, z += 5){
		cout << x << " - ";
		cout << y << " - ";
		cout << z;
		cout << "\n";
	}
	
	system("pause");
}


