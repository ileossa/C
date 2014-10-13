#include <stdio.h>
#include <math.h>

int main( int argc, char**argv){
	if(2 != argc){
		printf("Nombre de paramètres insuffisants\n");
		return 1;
	}

	int val1 = atoi(argv[1]);
	int i , j, tmp;
	float number = 0;
	
	for( i = 0; i <= val1-1; i++ ) {
		number = number+(pow(-3,-i) / (2*i+1) );
	}
	
	number = sqrt(12)*number;
	printf( "%f \n", number );

return 0;
}

