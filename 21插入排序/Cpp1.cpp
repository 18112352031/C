# include <stdio.h>

void sort(int * arr, int len)
{
    int i,j;
    int temp;
    for(i=1;i<len;i++)
	{
		j = i - 1;
		temp = arr[i];
		while(j >= 0)
		{
			if(temp > arr[j])
			{
				break;	
			}
			arr[j+1] = arr[j];
			j--;
		}
		if(arr[i] != temp)
		{
			arr[j+1] = temp;
		}
	}
}

int main(void)
{
    int a[10] = {5,3,8,7,10,4,6,9,1,2};
    int len = sizeof(a)/sizeof(a[0]);

    sort(a, len);

    int i;
    for(i=0;i<len;i++)
    {
        printf("%d ", a[i]);
    }
	printf("\n");

    return 0;
}
