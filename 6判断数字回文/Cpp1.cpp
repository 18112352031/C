# include <stdio.h>

int main(void)
{
	int val;
	int m;
	int sum = 0;

	printf("请输入需要判断的值：");
	scanf("%d", &val);

	m = val;
	while(m)
	{
		sum = sum * 10 + m%10;
		m /= 10;
	}

	printf("这个数倒过来是：%d\n", sum);

	if(sum == val)
	{
		printf("是回文数！\n");
	}
	else
	{
		printf("不是回文数！\n");
	}

	return 0;
}