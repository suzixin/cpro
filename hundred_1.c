#include <stdlib.h>
#include <stdio.h>


int main (int argc , char *argv[])
{
	char Source[20];	
	int count = 0;
	int i;
	char  r=NULL;
	for (i=0;i<20; i++)
	{
		Source[i] = '\0';
	}

		printf("Input the Number Source:(0-9,a-f) ");

/*

 	while((r = getchar()) != '\n')
	{	
			if (r<48|| r>57)
			break;
	//	scanf("%c", &r);
		Source[count++] = r;
		printf("%d\t%d\t%s\n", count, r-0,Source);
	}
*/
	while (1)
	{
			scanf ("%c", &r);
	printf("-%c-",r);
}
	

	

	return 0;

}
