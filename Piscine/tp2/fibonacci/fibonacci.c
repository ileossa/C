#include <stdlib.h>
#include <stdio.h>


int fibonnaci (int n){
	return (n<=1)? n:fibonnaci(n-1)+fibonnaci(n-2);
}


int main( int argc, char**argv){
	if( argc == 2 ){
		int value = atoi(argv[1]);
		printf("%d\n", fibonnaci(value));
	}
	else{
		int i = 0;
		int val1 = atoi(argv[1]);
		int val2 = atoi(argv[2]);
		for( i=val1; val2 >= i; i++ ){
			printf(" %d ", fibonnaci(i) );
		}
		printf("\n");
	}	
	return 0;
}
