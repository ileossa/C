#include <stdio.h>
#include <stdlib.h>

int main( int argc, char**argv){
	if(2>argc){
		printf("le nombre de parametres insuffisant \n");
		return 1;
	}
	if(2<argc){
		int i = atoi(argv[1]) + atoi(argv[2]);
		printf("%i \n",i);		
	}
return 0;
}
