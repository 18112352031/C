# include <stdio.h>
# define row 4 //��
# define col 3 //��

int main(void)
{
	//�����ά����
	int a[row][col] = {
		{1,3,2},
		{5,6,4},
		{8,7,9},
		{12,11,10}
	};

	//�������ǰ�Ķ�ά����
	int i, j, b, c, t;
	printf("����ǰ��\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%-3d", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	//���ÿ�����ֵ
	int max;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(max < a[i][j])
			{
				max = a[i][j];
			}
		}
		printf("��%d�����ֵΪ��%d\n", i+1, max);
	}
	printf("\n");

	//ð������
	for(i=0;i<row*col-1;i++)
	{
		for(j=i;j<row*col;j++)
		{
			b = i%row;
			c = j%col;
			if(a[b][c] > a[b][c+1])
			{
				t = a[b][c];
				a[b][c] = a[b][c+1];
				a[b][c+1] = t;
			}
		}
	}

	//��������Ķ�ά����
	printf("�����\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%-3d", a[i][j]);
		}
		printf("\n");
	}

	return 0;
}