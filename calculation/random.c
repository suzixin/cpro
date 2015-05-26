#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (int argc , char *argv[])
{
	int j, r, nloops;
	unsigned int seed;
	time_t t;

	t = time(NULL);
	seed =t;



	if (argc != 3){

		fprintf(stderr, "Usage: %s <seed> <nloops>\n", argv[0]);
		exit(EXIT_FAILURE);

	}

	//	seed = atoi(argv[1]);
	nloops = atoi(argv[2]);


	srand(seed);
	for (j=0; j < nloops; j++) {
		r = rand();
		printf("%d\t\t%d\n", r,seed);
	}
	exit(EXIT_SUCCESS);

}
