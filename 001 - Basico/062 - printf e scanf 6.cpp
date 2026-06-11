#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <iomanip>

using namespace std;

/*  */

/*  */

int main(int argc, char *argv[]) {
	
	float pi = M_PI;

	cout.precision(4);
	
	cout << "Valor de PI: " << pi << "\n";
	
	cout.precision(30);
	
	cout << "Valor de PI: " << pi << "\n";
	
	cout << "Valor de PI: " << std::scientific << pi << "\n";
	
	system("pause");
	
}

