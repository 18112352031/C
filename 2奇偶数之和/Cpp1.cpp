# include<stdio.h>

int main(void)
{
	int i;
	int sum_ji = 0;
	int sum_ou = 0;
	int length = 0;
	int ave;

	for(i=1; i<=100; i++)
	{
		if(i%2 != 0)
		{
			sum_ji += i;
			length++;
		}
		else
		{
			sum_ou += i;
		}
	}

	ave = sum_ji/length;

	printf("1到100的奇数之和为：%d\n", sum_ji);
	printf("1到100的偶数之和为：%d\n", sum_ou);
	printf("1到100的奇数的个数为：%d\n", length);
	printf("1到100的奇数的平均值为：%d\n", ave);

	return 0;
}