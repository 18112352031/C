# include <stdio.h>
# define row 4 //行
# define col 3 //列

int main(void)
{
	//定义二维数组
	int a[row][col] = {
		{1,3,2},
		{5,6,4},
		{8,7,9},
		{12,11,10}
	};

	//输出排序前的二维数组
	int i, j, b, c, t;
	printf("排序前：\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%-3d", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	//输出每行最大值
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
		printf("第%d行最大值为：%d\n", i+1, max);
	}
	printf("\n");

	//冒泡排序
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

	//输出排序后的二维数组
	printf("排序后：\n");
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