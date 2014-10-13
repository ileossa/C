#include <stdio.h>
#include <stdlib.h>

int main( int argc, char**argv){
	if(2>argc){
		printf("Nombre de paramètres insuffisants\n");
		return 1;
	}

	int val1 = atoi(argv[1]);
	int val2 = atoi(argv[2]);
	int i , j, tmp;

	if( val2 > val1 ) { 
		tmp = val1;
		val1 = val2;
		val2 = tmp;
	}

	if( val1 > 0 && val2 > 0 ) {
		for( i=val1 ; i <= val2; i++) {
			for( j=val1 ; j <= val2; j++) {
				printf("%d ", i*j );
			}
			printf("\n");
		}
	}else{
		for( i=val1 ; i >= val2; i--) {
			for( j=val1 ; j >= val2; j--) {
				printf("%i ", i*j );
			}
			printf("\n");
		}
	}

return 0;
}	
