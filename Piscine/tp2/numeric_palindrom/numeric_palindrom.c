#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int get_at_index( int number, int index, int length){
	float tmp = (pow( 10, length - index ));
	return( number % (int)tmp ) / (int) pow( 10, length - index - 1);
}



int get_count( int nb ){
	int i=0, res=0, pow=10;
	while (res != nb ){
		res = nb % pow;
		pow *= 10;
		i++;
	}
	return i;
}



int main( int argc, char**argv){
	if(2 != argc){
		printf("Nombre de paramètres insuffisants\n");
		return 1;
	}

	
	int number = atoi( argv[1] );	
	int i, length = get_count( number), x, y;
	for( i = 0; i < length/2; i++) {
		x = get_at_index( number, i, length );
		y = get_at_index( number, length-i-1, length );
		//printf("x=>%d   y=>%d", x,y);
		if( x != y ){
			printf("0 \n");
			return 0;
		}
	}
	printf("1 \n");

	return 0;
}

	
	

