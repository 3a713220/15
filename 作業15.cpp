#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int x, y;
	printf("�п�J�X�I:");
	scanf("%d", &x);
	printf("�п�J�X��:");
	scanf("%d", &y);
	
	if (x > 7&&x <= 17&&y >= 0&&y <= 59)
	{
		printf("�W�Ǯɶ�");
	}
	else if (x == 7&&y >= 30&&y <= 59)
	{
		printf("�W�Ǯɶ�");
	}
	else if (x >= 25 || y >= 60 || y <= -1)
	{
		printf("��J�ɶ����~");
	}
	else
		printf("��Ǯɶ�");

	system("pause");
	return 0;
}
