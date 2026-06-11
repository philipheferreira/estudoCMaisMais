#include <iostream>
#include <stdlib.h>

using namespace std;

/*  */

/*  */

int main(int argc, char *argv[]) {
	
	int *p;
	int vetor[10];
	
	p = &vetor[0];
	*p = 10;
	cout << "\n" << vetor[0] << "\n";
	
	*(p += 1);
	*p = 20;
	cout << "\n" << vetor[1] << "\n";
	
	*( p += 1);
	*p = 30;
	cout << "\n" << vetor[2] << "\n";
	
	system("pause");
	
}

