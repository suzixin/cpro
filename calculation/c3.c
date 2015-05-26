#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main (int argc , char *argv[])
{
	long int x, y;
	long int i;



	for ( i=1; i<10000000; i++)
	{
		x = sqrt(i+100);
		y = sqrt(i+168);

		if ((x*x == i+100) && (y*y == i+168))
		  printf("%ld\n", i);

	}




	exit(EXIT_SUCCESS);

}
