# include <stdio.h>

void echo(int * arr,int length)
{
	int i;
	for(i=0;i<length;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}

int main(void)
{
	int a[5] = {1,3,2,5};
	printf("%d\n", a);
	printf("%d\n", a+1);
	echo(a,5);
	return 0;
}
