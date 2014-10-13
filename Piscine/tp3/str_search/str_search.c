#include <stdio.h>
#include <stdlib.h>


//fonction pour le strlen
int length( const char* s1){
	int j = 0;
	while( s1[j])
		j++;
	return j;
}

//recherche l'occurence en argv1 et argv2 et retourne la position de curceur
int str_search( char *string, char *pattern){
	
	int i = 0, j = 0;
	int cpt = length( pattern );
	while( string[i] != '\0' ){
		if( string[i] == pattern[j] ){
			if( j == cpt - 1 )
				return i - j;
			j++;
		}
		else
			j = 0;
		i++;
	}
	return -1;
}




int main( int argc, char** argv){
	if(3 != argc){
		printf("Nombre de paramètres insuffisants\n");
		return 1;
	}

	char* chaine = argv[1];
	char* pattern = argv[2];
	
	printf( "%d \n", str_search(chaine, pattern) );

return 0;
}
