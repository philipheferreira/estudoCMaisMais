#include <iostream>
#include <stdlib.h>

using namespace std;

/*  */

/*  */

int main(int argc, char *argv[]) {
	
	void somar(float *var, float valor);
	void iniVetor(float *v);
	
	float num = 0;
	float vetor[5];
	
	somar(&num, 15);
	iniVetor(vetor);/* nao necessita colocar endereco por ser vetor.
	variavel precisa, vetor nao precisa*/
	
	cout << num << "\n\n";
	
	for(int i = 0; i < 5; i++){
		cout << vetor[i] << "\n";
	}
	
	system("pause");
	
}

void somar(float *var, float valor){
	*var += valor;
}

void iniVetor(float *v){
	v[0] = 2;
	v[1] = 5;
	v[2] = 6;
	v[3] = 12;
	v[4] = 89;
}
