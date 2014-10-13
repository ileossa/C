#include <stdio.h>

//calcul le nombre de jour depuis le 01/01/ année rentrée, jusqu au parametre passé
int dayNumber( int year, int month, int day ){
	int count_day = 0;
	int i;
	for (i = 1; i < month; i++) {
		count_day += day_month(year, i);
		//printf("%d\n", day_month(year, i));
	}
	//printf("year:%i   month:%i     day:%i \n", year, month, day);
	count_day += day;
	return count_day;
}


//definie si l'annee est bisexticle
int isLeapyear( int year ){
	int res = 0;
	if( (!(year % 4) && (year% 100)) || (year % 400) )
		res = 1;
	return res;
}


//definis le nombre de jours suivant le mois
int day_month( int year, int nb ){
	switch( nb ){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			return 31;
			break;				//pas obliger de mettre le break grace au return, qui finis la boucle.
		case 2:
			if( isLeapyear(year) ){
				return 29;
			}
			else{
				return 28;
			}
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			return 30;
			break;				//idem cf explication au-dessus
		default:
			break;
	}
}
		
		


//Calcul date
int main( int argc, char** argv){
	if(2 > argc){
		printf("Nombre de paramètres insuffisants\n");
		return 1;
	}	
	
	int number = atoi( argv[1] );
	int year = number / 10000;
	int month = ( (number%10000) / 100 );
	int day = (number%100);
	
	//printf("number:%i    year:%i   month:%i     day:%i \n", number, year, month, day);
         
	int day_number = dayNumber( year, month, day);
	printf("%i \n", day_number);


return 0;
}
