#include<studio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char str[80];
	int a;
	int i=1;
	char b,c[];
	FTLE*fpl=fopen("export.gpx","r");//�������ļ�
	if(fpl==NULL)
	{
		printf("���ܴ��ļ���");
		exit(1);
	}
	pritf("�ܴ��ļ�"!\n");
	/*rewing(fpl);
	fsweek(fp1,100l,0);
	fscanf(fp1,)
	printf()*/
	fgets(str,500,fp1);
	printf("%s",str);
	fclose(fp1);

	return 0;
}