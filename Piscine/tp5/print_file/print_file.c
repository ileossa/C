#include <stdio.h>




int main( int argc, char** argv){
	if(3 != argc){
		printf("Nombre de paramètres insuffisants\n");
		return 1;
	}

	FILE* fp;
	fp = fopen( argv[1], "r" );
	if(NULL == fp )
		return 1;

	int tampon = 0;

	if( argv[2][0] == '1' && !argv[2][1] ){
		while (( tampon = getc(fp)) != EOF){
			/* équivalent à while( fread( &tampon, sizeof(char), 1, fp) */
			printf("%x ", tampon);
		}
	}
	else if( argv[2][0] == '2' && !argv[2][1] ){
		while( (tampon = getc(fp)) != EOF ){
			/* équivalent à while( fread( &tampon, sizeof(char), 1, fp) */
			printf("%d ", tampon);
		}
	}
	else if( argv[2][0] == '3' && !argv[2][1] ){
		while( (tampon = getc(fp)) != EOF ){
			/* équivalent à while( fread( &tampon, sizeof(char), 1, fp) */
			printf("%c ", tampon);
		}
	}
	else
		printf("Arguments invalides \n");

	fclose(fp);
return 0;
}
	
