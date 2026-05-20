
#include <iostream>

using namespace std;

int main() {
	
	/* Uma matriz basicamente vai ser um vetor de vetores,
	um vetor vai ser gerado varias vezes em cada uma 
	das chamadas de um outro vetor */
	int matriz[3][4];
	int l, c;
	
	matriz[0][0] = 0;
	matriz[0][1] = 0;
	matriz[0][2] = 0;
	matriz[0][3] = 0;
	matriz[1][0] = 1;
	matriz[1][1] = 1;
	matriz[1][2] = 1;
	matriz[1][3] = 1;
	matriz[2][0] = 2;
	matriz[2][1] = 2;
	matriz[2][2] = 2;
	matriz[2][3] = 2;
	matriz[3][0] = 3;
	matriz[3][1] = 3;
	matriz[3][2] = 3;
	matriz[3][3] = 3; 

	/* Irei fazer um for que ira percorrer uma unica chamada desses vetores */
	for( l = 0; l < 4; l++){
		for( c = 0; c < 4; c++){
			cout << matriz[l][c] << " ";
		}
		cout << "\n";
	}
	
}