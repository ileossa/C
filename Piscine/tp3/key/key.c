#include <stdio.h>
#include <stdlib.h>
#include <math.h>


//recupere le velaur numeric a l index specifie
int get_at_index( int number, int index, int length){
	float tmp = (pow( 10, length - index ));
	return( number % (int)tmp ) / (int) pow( 10, length - index - 1);
}


//determiner la taille du nombre passe en param
int get_count( int nb ){
	int i=0, res=0, pow=10;
	while (res != nb ){
		res = nb % pow;
		pow *= 10;
		i++;
	}
	return i;
}


//transforme la valeur numeric en caractere
char key(int nb){
	int length = get_count(nb);
	int tmp=0;
	char res;

	tmp = ((get_at_index( nb, 0, length)*3 )+(get_at_index( nb, 1, length)*7 )+(get_at_index( nb, 2, length)*11 )+(get_at_index( nb, 3, length)*13 )) % 26;
		
	res = (char)tmp + 'A';	
	return res;
}



int main( int argc, char**argv){
	if(1 > argc){
		printf("Nombre de paramètres insuffisants\n");
		return 1;
	}
	
	int val = atoi(argv[1]);
	int length = get_count(val);
	char lettre;

	if(length == 4 ){
		 lettre = key( val );
	}
	else{
		printf("incorrect \n");
		return 0;
	}	
	printf("cle : %c \n", lettre);
	
	return 0;
}
	


