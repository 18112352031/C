# include <stdio.h>

int main(void)
{
	int a[10] = {1,8,9,5,2,3,45,12,15,30};
	int i;
	int j;
	int c; //容器
	for(i=0;i<9;i++)
	{
		for(j=i+1;j<=9;j++)
		{
			if(a[i] > a[j])
			{
				c = a[i];
				a[i] = a[j];
				a[j] = c;
			}
		}
	}
	printf("排序后的值为：");
	for(i=0;i<=9;i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	return 0;
}