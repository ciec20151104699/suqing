// getlen.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "stdlib.h"

int _tmain(int argc, _TCHAR* argv[])
{
	FILE*fp;
	char *s;
	int flag;
	int len=0;
	if((fp=fopen("e://test//f1.txt","r"))==0)
	{
		printf("�ļ�������ȷ�򿪣�");
		return(-1);
	}
	flag=fseek(fp,0,SEEK_END);
	len=ftell(fp);
	s=(char*)malloc(len);
	printf("length=%d  flag=%d\n",len,flag);
	fclose(fp);
	return 0;
}

