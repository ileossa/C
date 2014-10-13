#include <stdio.h>

short is_numeric (char* input){
	int i = 0;
	short decimal = 0;

	if( input[0] == '-' || input[0] == '+' )
		i = 1;
	
	while( input[i] ){
		//test si le caractere est valide && increment decimal apres le test !! 
		if( !(input[i] >= '0' && input[i] <= '9' || (input[i] == '.' && !decimal++)) )
			return 0;
		i++;
	}
	return 1;
}


//idem que le fonction atoi( char* )
int my_atoi( char* str){
	int is_negative = str[0] == '-', i = is_negative, result = 0;
	
	while( (str[i] != '\0') && ((str[i] >= '0') && (str[i] <= '9')) ){
		result *= 10;
		result += str[i] - '0'; 
		i++;
	}
	return is_negative ? -result : result;
}



long scalar_product( int v1[], int v2[], int dim1){
	long r = 0;
	int i;
	for (i = 0; i < dim1; i++)
		r += v1[i] * v2[i];
	return r;
}




int main( int argc, char** argv){
	
	int v1[10], v2[10], dim1=0, dim2=0, i, sep=0;

	//parcour les params en entrée
	for( i = 1; i < argc && dim2 <= dim1 && dim2 <= 10; i++ ){

		//test si le param est un '-' et suivant d'autre chose que '\0'
		if( argv[i][0] == '-' && !argv[i][1] ){
			sep = 1;
			continue;  //evite les bugs du parametre invalide et saute les tests suivant
		}

		//si c'est différent de 0 et une valeur numerique
		if( !sep && is_numeric(argv[i]) )
			v1[dim1++] = my_atoi( argv[i] );
		//test si val est numeric true/false
		else if( is_numeric( argv[i] ) )
			v2[dim2++] = my_atoi( argv[i] );
		else {
			printf( "%s est invalide \n", argv[i] );
			return 1;
		}
	}
	//si param1 est plus petit que param2 -> true
	if( dim1 > dim2 ){
		printf("Nombre de paramètres insuffisants\n"); 
		return 1;
	}
	else
		printf( "%ld \n", scalar_product( v1, v2, dim1 ));


return 0;
}
