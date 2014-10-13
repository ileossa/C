#include <stdio.h>
#include <stdlib.h>

int main( int argc, char**argv){
	if(2>argc){
		printf("le nombre de parametres insuffisants\n");
		return 1;
	}
	//test division 0
	if(atoi(argv[2]) == 0){
		printf("Division par zero impossible\n");
		return 1;
	}
	//si le diviseur plus grand que le divise
	if( atoi(argv[1]) < atoi(argv[2]) ){
		printf("%d n'est pas divisible par %d\n", atoi(argv[1]), atoi(argv[2]));
		return 1;
	}
	//test valeur1 entier naturel
	if( atoi(argv[1]) <= 0 ){
		printf("Division sur des entiers naturels uniquement\n");
		return 1;
	}

	//debut programme
	int val1 = atoi(argv[1]);
	int val2 = atoi(argv[2]);
	int tmp = val1;
	int i = 0;
	
	while( tmp >= val2 ){
		tmp -= val2;
		i++;
	}
	if( tmp == 0 )
		printf("%d=%d*%d\n", val1, i, val2);
	else
		printf("%d=%d*%d+%d\n", val1, i, val2, tmp);	


	return 0;
}
