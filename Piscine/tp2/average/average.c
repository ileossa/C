#include <stdio.h>
#include <stdlib.h>

int main( int argc, char**argv){
	if(2>argc){
		printf("Nombre de paramètres insuffisants\n");
		return 1;
	}
	
	int i = 1;
	float val =0;
	for(i; i<=argc-1; i++){
		val = val + atoi(argv[i]);
	}
	//moyenne
	printf("%.2f\n", val/(argc-1));
	return 0;
}
