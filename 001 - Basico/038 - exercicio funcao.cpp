#include <iostream>
#include <stdlib.h>

using namespace std;


int main(int argc, char *argv[]) {
	

	
	system("pause");
	
}


int fatorial(int n){
	if(n== 0){
		return 1;
	}
	return n*fatorial(n-1);
}



