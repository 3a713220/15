#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int x, y;
	printf("請輸入幾點幾分:");
	scanf("%d %d", &x, &y);
	
	if (x > 7&&y<17)
	{
		printf("上學時間");
	}
	else if (x == 7&&y>=30)
	{
		printf("上學時間");
	}
	else if (x >=24 && y >= 60)
	{
		printf("輸入時間錯誤");
	}
	else
		printf("放學時間");

	system("pause");
	return 0;
}
