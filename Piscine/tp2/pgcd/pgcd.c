#include <stdio.h>
#include <stdlib.h>

int main( int argc, char**argv){
	if(2>argc){
		printf("Nombre de paramètres insuffisants\n");
		return 1;
	}
	
	//debut prog
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	int tmp = 0;

	if( a == 0 && b == 0 ){
		printf("infini\n");
		return 0;
	}
	
	//Si la variable est negatif,on la passe en negatif
	a = a < 0 ? a*-1 : a;
	b = b < 0 ? b*-1 : b;
	do{
		tmp = a%b;
		a = b;
		b = tmp;
	}while( a != b && b != 0 );
	printf("%d\n", tmp);

return 0;
}
