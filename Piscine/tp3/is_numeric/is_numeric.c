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



int main( int argc, char** argv){
	if(2 > argc){
		printf("Nombre de paramètres insuffisants\n");
		return 1;
	}

	int res = is_numeric(argv[1]);
	printf("%d \n", res);



return 0;
}
