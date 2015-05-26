#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (int argc , char *argv[])
{
	long int bonus;
	long int bonus1, bonus2, bonus4, bonus6, bonus10;
	long int i;

	bonus1 = 100000 * 0.1;
	bonus2 = bonus1 + 100000*0.075;


	printf ( "Input:" );
	scanf ( "%ld" , &i);



	if ( i < 100000 ) {
		bonus = i * 0.1;
	}
	else if(i <200000) {
		bonus = bonus1 + (i -100000)*0.075;

	}
	printf ( "%ld\n" ,bonus);


	
	exit(EXIT_SUCCESS);

}
