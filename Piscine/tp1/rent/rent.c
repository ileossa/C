#include <stdlib.h>
#include <stdio.h>

int main( int argc, char**argv){
	if(2>argc){
		printf("Nombre de paramètres insuffisants \n");
		return 1;
	}

	int km = atoi(argv[1]);
	int days = atoi(argv[2]);
	
	//essence
	if( (0,13*km) > 10 )
		km = 10;
	else
		km = 0,13*km;
	int total = (days*30)+km;
	printf("e %d ", total );

	//diesel
	int total2 = 0;
	if( (0,11*km) > 8)
		km = 8;
	else
		km = 0,13*km;
	total2 = (days*30)+km;
	printf("d %d ",  total2 );

	//comparaison
	if( total < total2){
		printf(" e %d", total);
	}else{
		printf(" d %d \n", total2);
	}

return 0;
}