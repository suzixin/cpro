#include <stdlib.h>
#include <time.h>
#include <stdio.h>

#define LEN  26
int main (int argc , char *argv[])
{
	char   seq[LEN] = {'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l','z','x','c','v','b','n','m'};

	int i;
	int  j, temp;
	int first, last;

	first = 0;
	last = 25;

	for ( i= 0 ;i <26 ; i++)
	{
		printf("%c",seq[i]);

	}
	printf ( "\n" );
	for (i = first + 1; i <= last; i++){
		temp = seq[i]; //與已排序的數逐一比較，大於temp時，該數向後移
		for(j = i - 1; j >= first && seq[j] > temp; j--) //当first=0，j循环到-1时，由于[[短路求值]](http://zh.wikipedia.org/wiki/%E7%9F%AD%E8%B7%AF%E6%B1%82%E5%80%BC)，不会运算array[-1]
			seq[j + 1] = seq[j];
		seq[j+1] = temp; //被排序数放到正确的位置
	}


	for ( i= 0 ;i <26 ; i++)
	{
		printf("%c",seq[i]);

	}
	printf ( "\n" );

	exit(EXIT_SUCCESS);

}
