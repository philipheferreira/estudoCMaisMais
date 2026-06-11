#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <iomanip>

using namespace std;

/*  */

/*  */

int main(int argc, char *argv[]) {
	
	int num = 30;
	
	cout << "Valor de NUM: " << setw(10) << num << "\n";
	
	cout << "Valor de NUM: " << setw(10) << setfill('0') << num << "\n";
	
	system("pause");
	
}

