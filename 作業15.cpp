#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int x, y;
	printf("�п�J�X�I�X��:");
	scanf("%d %d", &x, &y);
	
	if (x > 7&&y<17)
	{
		printf("�W�Ǯɶ�");
	}
	else if (x == 7&&y>=30)
	{
		printf("�W�Ǯɶ�");
	}
	else if (x >=24 && y >= 60)
	{
		printf("��J�ɶ����~");
	}
	else
		printf("��Ǯɶ�");

	system("pause");
	return 0;
}
