# include <stdio.h>

bool IsPrime(int val)
{
	int i;
	for(i=2; i<val; i++)
	{
		if(val%i == 0)
		{
			break;
		}
	}
	if(i == val)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main(void)
{
	int val;
	scanf("%d", &val);
	if(IsPrime(val))
	{
		printf("是素数！\n");
	}
	else
	{
		printf("不是素数！\n");
	}
	float i = 99.9;
	printf("%f", i);

	return 0;
}