#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int word=1;
int charnum=0;
char c;

int main(int argc, char *argv[]) {
	char s[10000];
	int len,i;
	FILE *fp;
	if((fp=fopen(argv[2],"r"))==NULL)
	{
		printf("Open failed\n");
		exit(0);
	}
	if(strcmp(argv[1],"-c")==0)
	{
		while((c=fgetc(fp))!=EOF)
		charnum++;
		fclose(fp);
		printf("字符数：%d",charnum);
	}
	else if(strcmp(argv[1],"-w")==0)
	{
		while(fgets(s,10000,fp)!=NULL)
		{
			len=strlen(s);
			for(i=0;i<len;i++)
			{
				if(s[i]==' '&&s[i+1]!=' ')
				word++;
				else if(s[i]==','&&s[i+1]!=' ')
				word++;
				else if(i==len-1)
				break;
			}
		} 
		word++; 
		printf("单词个数：%d ",word);
	}
	
	return 0;
}
