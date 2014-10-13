#include <stdio.h>

int main(int argc, char**argv){
	if(2>argc){
		printf("Nombre de paramètres insuffisants \n");
		return 1;
	}
	int i = atoi(argv[1])%2;
	printf("%i\n", i);
}
