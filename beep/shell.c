#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LEN  26

int main (int argc , char *argv[])
{
	char   seq[LEN] = {'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l','z','x','c','v','b','n','m'};

	int i, j, k,h,step;
	int temp;

	for ( i= 0 ;i <26 ; i++)
	{
		printf("%c",seq[i]);

	}
	printf ( "\n" );

	for ( step=LEN/2; step> 1;  step= step/2)
	{
		for ( j=0; j< step; j++)
		{// 固定步长下的每个分组

			for ( k= 1; j+k*step<LEN; k++)
			{// 第J个分组
				for ( h= 0; h<k; h++)
				{//插入
					printf("%c", seq[j+step*k]);
					if (seq[j+step*k] <seq[j+step*h])
					{
						temp = seq[j+step*h];

						seq[j+step*h] = seq[j+step*(h-1)];

						seq[j+step*k] = temp;
					}

				}
			}	
					printf("\n");

			

		}

	}


	for ( i= 0 ;i <26 ; i++)
	{
		printf("%c",seq[i]);

	}
	printf ( "\n" );



	exit(EXIT_SUCCESS);

}
