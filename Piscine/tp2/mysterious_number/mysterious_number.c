#include <stdio.h>
#include <math.h>


int getCount(int nb){
	int res = 0, i=0, pow=10;
	while( res != nb ){
		res = nb % pow;
		pow *= 10;
		i++;
	}
	return i;
}


int main( int argc, char**argv){
	if(2 > argc){
		printf("Nombre de paramètres insuffisants\n");
		return 1;
	}

	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	int i, j, som, tmp;
		
	for( i=0; i<=b; i++ ){
		som = 0;
		for( j=0; j<= getCount( i ); j++ ) {
			tmp = ( i % (int)(pow(10, j+1)) ) / pow (10, j );
			som += pow( tmp, a);
		}
		if( som == i )
			printf( "%d ", i);
	}
	printf("\n");
	return 0;
}









