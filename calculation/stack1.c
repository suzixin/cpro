#include <stdio.h>
#include <stdlib.h>
#include <time.h>


struct {
	int x;
	int y;
	int z[20];
	int *p;

}  link;
void init()
{
	link.p = link.z;

}
void push(int n)
{

	*link.p= n;

	link.p++;
}


void pop()
{
		link.p--;
		printf("%d\t",*link.p  );

	
}


int main (int argc , char *argv[])
{
	int i;

	init();

	for ( i=1; i<=20; i++)
	{
		push(i);
	//	link.z[i-1] = i;
	//
	}

	for ( i=1; i<=20; i++)
	{
		pop();
	//	printf("%d\t",*link.p  );
	}

		printf("\n");



	exit(EXIT_SUCCESS);

}
