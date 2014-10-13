#include <stdio.h>
#include <stdlib.h>

int length(char* tab){
	int i = 0;
	while( tab[i] !='\0' ){
		i++;
	}
	return i;
}


int main( int argc, char** argv){
	if(3 != argc){
		printf("Nombre de paramètres insuffisants\n");
		return 1;
	}

	FILE* fp;
	fp = fopen( argv[1], "r" );
	if(NULL == fp ){
		printf("I\n");
		return 1;
	}

	FILE* fw;
	fw = fopen( argv[2], "r" );
	if( fw ){
		printf("fichier %s existant, copie impossible \n", argv[2]);
		fclose(fw);
		fclose(fp);
		return 1;
	}
	else{
		fw = fopen( argv[2], "w+" );
		if(NULL == fw ){
			printf("I\n");
			return 1;
		}
	}


	int tampon = 0;

	printf( "double du fichier %s : ", argv[1]);

	fwrite( "double du fichier", sizeof(char), 18, fw);
	fwrite( argv[1], sizeof(char), length(argv[1]), fw);
	fwrite( " : ", sizeof(char), 3, fw);

	while (( tampon = getc(fp)) != EOF){
		/* équivalent à while( fread( &tampon, sizeof(char), 1, fp) */
		printf("%c", tampon);
		fputc( tampon, fw);
	}
	printf("\n");

	fclose(fp);
	fclose(fw);

return 0;
}
