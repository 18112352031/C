# include <stdio.h>
# include <malloc.h>

struct Student
{
	char name[100];
	int age;
	int score;
};

void Stu_in(struct Student * pArr, int len)
{
	int i;
	for(i=0;i<len;i++)
	{	
		printf("�������%d��ѧ������Ϣ��\n", i+1);
		printf("name��");
		scanf("%s", pArr[i].name);
		printf("age��");
		scanf("%d", &pArr[i].age);
		printf("score��");
		scanf("%d", &pArr[i].score);	
		printf("\n");
	}
}

void Stu_out(struct Student * pArr, int len)
{
	int i;
	for(i=0;i<len;i++)
	{
		printf("��%d��Ϊ��\n", i+1);
		printf("name��%s\n", pArr[i].name);
		printf("age��%d��\n", pArr[i].age);
		printf("score��%d��\n", pArr[i].score);	
		printf("\n");
	}
}

void exchange(struct Student * a, struct Student * b)
{
	struct Student c;
	c = *a;
	*a = *b;
	*b = c;
}

void sort(struct Student * pArr, int len)
{
	int i;
	int	left = 0;
	int right = len-1;
	while(left < right)
	{
		int flag = 0;
		for(i=left;i<right;i++)
		{
			if(pArr[i].score < pArr[i+1].score)
			{
				exchange(&pArr[i], &pArr[i+1]);
				flag = 1;
			}
		}
		if(flag == 0)
		{
			break;
		}
		right--;
		flag = 0;

		for(i=right;i>left;i--)
		{
			if(pArr[i-1].score < pArr[i].score)
			{
				exchange(&pArr[i-1], &pArr[i]);
				flag = 1;
			}
		}
		if(flag == 0)
		{
			break;
		}
		left++;
	}
}

int main(void)
{
	int amount;
	struct Student * pArr;
	printf("����������Ҫ��ӵ�ѧ����������");
	scanf("%d", &amount);
	pArr = (struct Student *)malloc(amount * sizeof(struct Student));

	printf("\n");
	printf("---------��������---------\n");
	Stu_in(pArr, amount);

	sort(pArr, amount);

	printf("\n");
	printf("---------ѧ������---------\n");
	Stu_out(pArr, amount);

	return 0;
}