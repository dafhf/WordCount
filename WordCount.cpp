#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main( int argc , char *argv[] )
{
	FILE *fp;
	int count1=0;//计算单词数
	int count2=0;//计算字符数
	char c1[2130];//用于存储读到的单词 
	char a;
	fp = fopen(argv[2],"r");//命令行第三个字符输入文件名 
	if(fp==0)//检测文件是否成功打开 
	{
		printf("文件打开失败");
	}
	else
	{
		while(fscanf(fp,"%s",c1)==1)//读取单词数 
		{
			count1++;
		}
		while(fgetc(fp)!=EOF)//读取字符数 
		{
			count2++;
		}
		if(strcmp(argv[1],"-w")==0)//在命令行中第二个字符输入-w则读取单词数 
			printf("%d\n",count1);
		if(strcmp(argv[1],"-c")==0)//在命令行第二个字符输入-c则读取字符数 
			printf("%d\n",count2);
	}
	fclose(fp);
	return 0;
}
