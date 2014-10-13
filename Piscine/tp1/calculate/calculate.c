#include <stdio.h>
#include <stdlib.h>


int main(int argc, char**argv){
	
	if(4>argc){
		printf("Nombre de paramètres insuffisants \n");
		return 1;
	}

	int val1 = atoi(argv[1]);
	int val2 = atoi(argv[3]);

	if(val2 == 0 && argv[2][0] == '/'){
		printf("Division par zero impossible \n");
	}else{
		 printf("%d\n", val1/val2 );
	}	

	switch(argv[2][0]){
		case '+' : printf("%d\n", val1+val2 ); break;
		case '-' : printf("%d\n", val1-val2 ); break;
		case '*' : printf("%d\n", val1*val2 ); break;
		case '%' : printf("%d\n", val1%val2 ); break;
		default : printf("toto");
	}
return 0;
}
