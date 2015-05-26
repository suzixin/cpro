#include <stdio.h>
#include <stdlib.h>


int main(int argc ,char *argv[])
{

FILE *pfile;


    char buf[1024] = {'\0'};

    if(NULL == (pfile=fopen("cc3500.txt","r")))

    //if(NULL == (pfile=fopen("test.txt","rb")))
    {
        printf("can't write file:test.dat");
        return(1);
    }
    //fread(&ntest,sizeof(int),1,pfile);
    fgets(buf, 1024, pfile);
    printf("%s\n",buf);
    //printf("%d\n",ntest);
	/*
    for ( na=0; na<1024 && buf[na]!=0; na++)
    {
         ntemp = buf[na];
        ntemp &= 255;
        printf("%0.2x\n",ntemp);
    }
	*/
    fclose(pfile);

	return 0;

}
