#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int wordcount=1;
int charcount=0;
char c;
int main(int argc, char *argv[]) {
	char s[100];
	int len,i;
	FILE *fp;
	
	if(strcmp(argv[1],"-w")==0)
	{
		while(fgets(s,100,fp)!=NULL)
		{
			len=strlen(s);
			for(i=0;i<len;i++)
			{
				if(s[i]==' '&&s[i+1]!=' ')
				wordcount++;
				else if(s[i]==','&&s[i+1]!=' ')
				wordcount++;
				else if(i==len-1)
				break;
			}
		} 
		wordcount++; 
<<<<<<< HEAD
		printf("µ¥´Ê¸öÊý£º%d ",wordcount);
=======
		printf("å•è¯æ•°%d ",wordcount);
>>>>>>> 6bf7f310859a9a0641bb18badcb83c1913fb7cd5
	}
	
	
	if((fp=fopen(argv[2],"r"))==NULL)
	{
		printf("Open failed\n");
		exit(0);
	}
	if(strcmp(argv[1],"-c")==0)
	{
		while((c=fgetc(fp))!=EOF)
		charcount++;
		fclose(fp);
<<<<<<< HEAD
		printf("×Ö·ûÊý£º%d",charcount);
=======
		printf("å­—ç¬¦æ•°%d",charcount);
>>>>>>> 6bf7f310859a9a0641bb18badcb83c1913fb7cd5
	}
	
	return 0;
}
