#include<studio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char str[80];
	int a;
	int i=1;
	char b,c[];
	FTLE*fpl=fopen("export.gpx","r");//打开输入文件
	if(fpl==NULL)
	{
		printf("不能打开文件！");
		exit(1);
	}
	pritf("能打开文件"!\n");
	/*rewing(fpl);
	fsweek(fp1,100l,0);
	fscanf(fp1,)
	printf()*/
	fgets(str,500,fp1);
	printf("%s",str);
	fclose(fp1);

	return 0;
}