#include <stdio.h>

int main(int argc, char**argv){
	if(3>argc){
		printf("Nombre de paramètres insuffisants \n");
		return 1;
	}

	int val1 = atoi(argv[1]);
	int val2 = atoi(argv[2]);

	if(val1 > val2 )
		printf ("%i\n", val1);
	if(val1 < val2 )
		printf("%i\n", val2);
	if(val1 == val2 )
		printf("equals\n");
}
