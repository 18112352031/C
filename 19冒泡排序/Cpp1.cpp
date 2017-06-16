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
	int i,j;
	
	for(i=0;i<len-1;i++)
	{
		for(j=0;j<len-1-i;j++)
		{
			if(arr[j] > arr[j+1])
			{
				exchange(&arr[j], &arr[j+1]);
			}
		}
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