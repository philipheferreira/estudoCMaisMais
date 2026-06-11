#include <iostream>
#include <stdlib.h>

using namespace std;

/*  */

/*  */

int main(int argc, char *argv[]) {
	
	int *p;
	int vetor[10];
	
	p = &vetor[0];
	cout << "\n" << p << "\n";
	
	p = &vetor[1];
	cout << "\n" << p << "\n";
	
	p = &vetor[2];
	cout << "\n" << p << "\n";
	
	system("pause");
	
}

