#include <stdio.h>
#include <stdlib.h>

int main( int argc, char**argv){
	if(2>argc){
		printf("Nombre de paramètres insuffisants\n");
		return 1;
	}

	int a = atoi(argv[1]);
	int star = 1;
	int tab = a-1;
	int i, j;
	for( i=0; i<a; i++ ) {
		for( j=0; j<tab; j++ ) {
			//le tab est mal géré, donc mettre un espace
			printf(" ");
		}
		tab --;
		for( j = 0; a>0&&j<star ; j++ ) {
			printf( "*" );
		}
		star += 2;
		printf( "\n" );
	}
return 0;
} 
