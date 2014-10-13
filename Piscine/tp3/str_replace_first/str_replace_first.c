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


void str_replace_first(char *string, char *pattern, char *replace){
	int i = 0;
	int cpt = length(pattern);
	int cre = length(replace);

	if( cpt != cre ){
		printf("Error \n");
		return;
	}

	int ind = str_search(string, pattern);
	if( ind != 1 ){
		for( i = ind; i-ind < cpt; i++)
			string[i] = replace[i-ind];
	}
}
	


int main( int argc, char** argv){
	if(4 != argc){
		printf("Nombre de paramètres insuffisants\n");
		return 1;
	}

	char* chaine = argv[1];
	char* pattern = argv[2];
	char* replace = argv[3];
	str_replace_first( chaine, pattern, replace);
	
	printf( "after %s \n", chaine );

return 0;
}
