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

	printf("1��100������֮��Ϊ��%d\n", sum_ji);
	printf("1��100��ż��֮��Ϊ��%d\n", sum_ou);
	printf("1��100�������ĸ���Ϊ��%d\n", length);
	printf("1��100��������ƽ��ֵΪ��%d\n", ave);

	return 0;
}