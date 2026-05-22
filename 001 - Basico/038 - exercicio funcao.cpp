#include <iostream>
#include <stdlib.h>

using namespace std;


int main(int argc, char *argv[]) {
	
	int fatorial(int n);
	int fibonacci(int n);
	
	int valor, resultado;
	
	valor = 8;
	resultado = fatorial(valor);
	
	cout << "\n\nFibonacci com " << valor << ": " << resultado;
	
	cout << "\n\nFibonacci com " << valor << " Valores: ";
	
	for(int i = 0; i < valor; i++){
		cout << fibonacci(i+1) << " ";
	}
		
    cout << "\n\n";
	
	system("pause");
	
}

// 10! = 10*9*8*7*6*5*4*3*2*1
int fatorial(int n){
	if(n== 0){
		return 1;
	}
	return n*fatorial(n-1);
}

int fibonacci(int n){
	if(n==1 || n==2){
		return 1;
	}else{
		return fibonacci(n-1) + fibonacci(n-2);
	}
}

