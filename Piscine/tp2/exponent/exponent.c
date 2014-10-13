#include <stdio.h>
#include <stdlib.h>

int main( int argc, char**argv){
	if(2>argc){
		printf("Nombre de paramètres insuffisants\n");
		return 1;
	}

	int val1 = atoi(argv[1]);
	int val2 = atoi(argv[2]);
	int value_negative = val2;
	int i = 0;
	int tmp = val1;

	if( val1 == 0 && val2 == 0 ) {
		printf("indefini\n");
		return 0;
	}
	else if( val1 != 0 && val2 == 0 ) {
		printf("1\n");
		return 0;
	}
	else{
		//si valeur negatives
		val1 = val1 < 0 ? val1*-1 : val1;
		val2 = val2 < 0 ? val2*-1 : val2;
	
		//debut prog
		for(; i < val2; i++) {
			tmp *= val2;
		}
		if( value_negative < 0 )
			printf("%f\n ", (float)tmp );
		else
			printf("%d\n ", tmp);
	}

return 0;
}
