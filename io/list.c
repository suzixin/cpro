    #include <stdio.h>  
     #include <stdlib.h>  
           
      
    int  main(int argc ,char *argv[])  
    {  
           FILE *fp;  
		   char buff[512],c;
		   unsigned int b7,b6,b5,b4,b3,b2,b1,b0;
		   unsigned int mask = 0x00000080;
        fp=fopen("uc35.txt","r");  
        if(fp==NULL){  
            printf("文件创建失败!");  
            return -1;  
        }  

		fseek(fp, 24,0);

		if ( fgets (buff,4, fp) != NULL)
		{
			c = buff[0];
			b7 = c&mask;
			b6 = c&(mask>>1);
			b5 = c&(mask>>2);
			b4 = c&(mask>>3);
			b3 = c&(mask>>4);
			b2 = c&(mask>>5);
			b1 = c&(mask>>6);
			b0 = c&(mask>>7);
			printf("%c\t%d,%d,%d,%d,%d,%d,%d,%d\n",c,b7,b6,b5,b4,b3,b2,b1,b0);
			printf("%s--\n", buff);
		}
		fclose(fp);
		return 0;
    }  
