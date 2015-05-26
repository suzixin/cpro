#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LEN  26

int main (int argc , char *argv[])
{
	char   seq[LEN] = {'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l','z','x','c','v','b','n','m'};

	int i, k,h;
	int temp;

	for ( i= 0 ;i <26 ; i++)
	{
		printf("%c",seq[i]);

	}
	printf ( "\n" );

	{

			for ( k= 1; k<LEN; k++)
			{// 第J个分组
				//printf("%c", seq[k]);
				temp = seq[k];
				for ( h= 0; h<k; h++)
				{//插入
					if (seq[k] <seq[h])
					{

						for ( i= 0; i<=k-h; i++)
						{
							seq[k-i] = seq[(k-1-i)];
						}
						seq[h] =temp;
					}

				}
			}	
			printf("\n");

	}


	for ( i= 0 ;i <26 ; i++)
	{
		printf("%c",seq[i]);

	}
	printf ( "\n" );



	exit(EXIT_SUCCESS);

}
