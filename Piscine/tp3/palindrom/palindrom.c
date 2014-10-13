#include <stdio.h>

//fonction pour le strlen
int length( const char* s1){
	int j = 0;
	while( s1[j])
		j++;
	return j;
}

/* Parcour le tab passé n param jusque taille/2
	compare les caracteres tab[i] == tab[taille_tab-i]
*/
short is_palindrome( char* input ){
	int taille = length(input);
	int i=0, k=0;
	
	while( k != taille){
		//si le caractere est une majuscule
		if(input[k] >= 65 && input[k] <= 90) {
			//remplace par une minuscule a='A'+32, dans le tableau ascii
			input[k] = input[k] + 32;
		}
		k++;
	}
	k = taille - i - 1;
	i = 0;
	//printf("taille:%d    k:%d    i:%d\n", taille, k, i);

	//parcour le tableau jusque la moitié definis par taille
	while( i != taille ){
		if( input[i] == ' '){
			i++;
			continue;
		}
		if( input[k] == ' '){
			k--;
			continue;
		}
		if( input[i] != input[k] )
			return 0;
		k--;
		i++;
		//printf("i:%d      k:%d\n", i, k);
	}
	return 1;
}


int main( int argc, char** argv){
	if(2 > argc){
		printf("Nombre de paramètres insuffisants\n");
		return 1;
	}

	short taille = is_palindrome( argv[1] );
	printf("%i \n", taille);

return 0;
}
