# include <stdio.h>
int main(void)
{
	int a[5] = {0};
	printf("������5������\n");
	int i;
	int j;
	for(i=1;i<=5;i++)
	{
		printf("��%d������", i);
		scanf("%d", &a[i-1]);
	}
	printf("���������Ϊ��");
	for(j=0;j<5;j++)
	{
		printf("%d ", a[j]);
	}
	printf("\n");
	int x = 0;
	int y = 4;
	int c;
	while(x < y)
	{
		c = a[x];
		a[x] = a[y];
		a[y] = c;
		x++;
		y--;
	}
	printf("����������������ǣ�");
	for(j=0;j<5;j++)
	{
		printf("%d ", a[j]);
	}
	printf("\n");
	return 0;
}