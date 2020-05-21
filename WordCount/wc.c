#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int wordcount=0;
int charcount=0;
char c;
int main(int argc, char *argv[]) {
	char s[100];
	int len,i;
	FILE *fp;
	
	if((fp=fopen(argv[2],"r"))==NULL)
	{
		printf("Open failed\n");
		exit(0);
	}
	
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
			}} 
		wordcount++; 
		printf("单词个数%d ",wordcount);
	}
	
	else if(strcmp(argv[1],"-c")==0)
	{
		while((c=fgetc(fp))!=EOF)
		charcount++;
		fclose(fp);
		printf("字符数%d",charcount);
	}
	
	return 0;
}
