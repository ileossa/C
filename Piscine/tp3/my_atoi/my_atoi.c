#include <stdio.h>
#include <math.h>


//retourne le num ascii du caractere
int key_number( char tab){
	
	int res = (int)tab - '0';
	return res;	
}


int main( int argc, char** argv){
	if(1 > argc){
		printf("Nombre de paramètres insuffisants\n");
		return 1;
	}

	int i = 0, is_negative = 0, res = 0;
	
	//si nb negatif, save etat et ajoute i+1
	if( '-' == argv[1][0] ){
		is_negative = 1;
		i++;
		//printf("nega?=>%i\n", is_negative);
	}
	
	do{
		res *= 10;
		res += key_number( argv[1][i] );
		//printf("key=> %i    i=>%i    res=>%i \n", key_number( argv[1][i]), i, res);
		i++;
	}while( (argv[1][i] != '\0') && ( '0' <= argv[1][i] <= '9') );
	

	// multiplie par -1 pour rendre negatif le nb
	if( 1 == is_negative )
		res *= -1;	
			
	printf("%i \n", res);
	return 0;
}
