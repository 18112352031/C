# include <stdio.h>

int main(void)
{
	int val;
	int m;
	int sum = 0;

	printf("��������Ҫ�жϵ�ֵ��");
	scanf("%d", &val);

	m = val;
	while(m)
	{
		sum = sum * 10 + m%10;
		m /= 10;
	}

	printf("������������ǣ�%d\n", sum);

	if(sum == val)
	{
		printf("�ǻ�������\n");
	}
	else
	{
		printf("���ǻ�������\n");
	}

	return 0;
}