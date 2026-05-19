#include <iostream>
#include <stdlib.h>

using namespace std; 

int main() { 
	
	int contador = 0;
	
	while(contador++ < 20) {
		cout << contador << "\n";
		
		if(contador == 10){
			cout << "A repetição foi quebrada\n";
			break;
		}
	}
	
	system("pause");
}


