#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main( int argc , char *argv[] )
{
	FILE *fp;
	int count1=0;//���㵥����
	int count2=0;//�����ַ���
	char c1[2130];//���ڴ洢�����ĵ��� 
	char a;
	fp = fopen(argv[2],"r");//�����е������ַ������ļ��� 
	if(fp==0)//����ļ��Ƿ�ɹ��� 
	{
		printf("�ļ���ʧ��");
	}
	else
	{
		while(fscanf(fp,"%s",c1)==1)//��ȡ������ 
		{
			count1++;
		}
		while(fgetc(fp)!=EOF)//��ȡ�ַ��� 
		{
			count2++;
		}
		if(strcmp(argv[1],"-w")==0)//���������еڶ����ַ�����-w���ȡ������ 
			printf("%d\n",count1);
		if(strcmp(argv[1],"-c")==0)//�������еڶ����ַ�����-c���ȡ�ַ��� 
			printf("%d\n",count2);
	}
	fclose(fp);
	return 0;
}
