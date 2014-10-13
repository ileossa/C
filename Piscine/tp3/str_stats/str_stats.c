#include <stdio.h>
#include <stdlib.h>


//fonction pour le strlen
int length( const char* s1){
	int j = 0;
	while( s1[j])
		j++;
	return j;
}

//regarde si le caract est une voyelle sinon c'est une consonne
int is_consonne(char tab){
	int i =0;
	
	if( tab > 'a' && tab < 'z' )
		tab -= 32;
	switch(tab){
		case 'A' :
		case 'E' :
		case 'I' :
		case 'O' :
		case 'U' :
		case 'Y' :
			return 0;
		default:
			break;		
	}
	return 1;
}

//regarde si la valeur est un decimal
int is_value(char tab){
	int i = 0, val = 0;
	
		if( '0'< tab && tab<'9' )
			val ++;		
	
	return val;
}



void str_stats(char* input){
	int i = 0;
	int mot = 0, val = 0, cons = 0, voyelle = 0;
	
	while( input[i] != '\0' ){
		printf("carac:%c    i:%d \n", input[i], i );
		if( is_value(input[i]) ){
			val++;
		}
		else if( is_consonne(input[i]) ){
			cons++;
		}
		else{
			voyelle++;
		}
		i++;
	}
	
	printf("%d consonne(s) \n", cons);
	printf("%d voyelle(s) \n", voyelle);
	printf("%d chiffres(s) \n", val);

}




int main( int argc, char** argv){
	if(2 > argc){
		printf("Nombre de paramètres insuffisants\n");
		return 1;
	}
	
	int i = 1;

	
	for( i; i<  argc; i++)
		str_stats( argv[i] );
	printf("%d mot(s) \n", argc-1 );

return 0;
}
