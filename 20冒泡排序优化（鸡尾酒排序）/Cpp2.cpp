# include <stdio.h>

void exchange(int * a, int * b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}

void sort(int * arr, int len)
{
	int i;
	int	left = 0;
	int right = len-1;
	while(left < right)
	{
		int flag = 0;
		for(i=left;i<right;i++)
		{
			if(arr[i] > arr[i+1])
			{
				exchange(&arr[i], &arr[i+1]);
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
			if(arr[i-1] > arr[i])
			{
				exchange(&arr[i-1], &arr[i]);
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
	int a[10] = {2,3,5,1,4,7,9,6,10,8};
	int len = sizeof(a) / sizeof(a[0]);

	sort(a, len);

	int i;
	for(i=0;i<10;i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	return 0;
}