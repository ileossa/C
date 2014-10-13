#include <stdio.h>
#include <stdlib.h>

int main( int argc, char**argv){
	if(2>argc){
		printf("Nombre de paramètres insuffisants\n");
		return 1;
	}
	//valeur negative
	if( atoi(argv[1]) < 0 )
		printf("%d n'est pas un entier naturel", atoi(argv[1]) );
	
	

return 0;
}
