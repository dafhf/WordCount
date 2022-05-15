#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main( int argc , char *argv[] )
{
	FILE *fp;
	int count1=0;
	int count2=0;
	char c1[2130];
	char a;
	fp = fopen(argv[2],"r");
	while( strcmp(argv[1],"-w")==0 && fscanf(fp,"%s",c1)==1)
	{
		count1++;
	}
	while(fgetc(fp)!=EOF)
	{
		count2++;
	}
	if(strcmp(argv[1],"-w")==0)
		printf("%d\n",count1);
	if(strcmp(argv[1],"-c")==0)
		printf("%d\n",count2);
	fclose(fp);
	return 0;
}
