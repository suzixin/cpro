#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (int argc , char *argv[])
{
	int n1, n2, n3;


	for ( n1 = 1; n1<5; n1++)
	{
		for ( n2 = 1; n2<5; n2++)
		{
			for ( n3 = 1; n3<5; n3++)
			{
					if( n1 != n2 && n1 != n3 && n2 != n3)
				printf("%d\t%d\t%d\n", n1,n2, n3);
			}
		}
	}



	exit(EXIT_SUCCESS);

}
