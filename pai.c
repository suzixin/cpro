#include <stdlib.h>
#include <stdio.h>


int main (int argc , char *argv[])
{
	 int n=2;
	float tag, pai=0.0,step=0.0;
			
	pai=1.0;
	tag = 1.0;

	while(n<200000000)	
{
	tag =(-1.0)*tag;
	step= tag/(2*n-1);
	pai=pai+step;
	n++;
	printf("-.");
		
	}

	printf("--%f--%f", step,pai*4);

	

	return 0;
}
