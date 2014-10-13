#include <stdio.h>
#include <stdlib.h>

int main( int argc, char**argv){
	if(2>argc){
		printf("Nombre de paramètres insuffisants \n");
		return 1;
	}

	int val1 = atoi(argv[1]);
	int val2 = atoi(argv[2]);
	int val3 = atoi(argv[3]);
	int tmp = 0;
	/*
	test si val et sup a val2 et val3?   val en troisieme position: val en premier position
	test si val2 et sup a val?   val en premiere position: null
	test si val2 et sup a val3?  val2 en troisieme: null
	*/


	if( val1 > val2 ){
		tmp = val1;
		val1 = val2;
		val2 = tmp;
	}
	else( val1 < val2 ){
		tmp = val1;
		val1 = val2;
		val2 = tmp;
	}
	if( val1 > val3){
		tmp = val1;
		val1 = val2;
		val2 = tmp;
	}
	else( val1 < val3 ){
		tmp = val1;
		val1 = val3;
		val3 = tmp;
	}
	if( val2 > val3){
		tmp =  val1;
		val1 = val2;
		val2 = tmp;
	}
	printf("%d %d %d\n", val1, val2, val3);
}
