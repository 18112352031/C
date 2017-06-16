# include <stdio.h>

void insert_sort(int * arr, int len, int gap, int index)
{
    int i,j;
    int temp;
    for(i=index+gap;i<len;i+=gap)
	{
		j = i - gap;
		temp = arr[i];
		while(j >= 0)
		{
			if(temp > arr[j])
			{
				break;	
			}
			arr[j+gap] = arr[j];
			j-=gap;
		}
		if(arr[i] != temp)
		{
			arr[j+gap] = temp;
			
		}
	}
}

void shell_sort(int * arr, int len)
{
    int i,k;
	int gap;//ÔöÁ¿
    for(gap=len/2;gap>0;gap/=2)
	{
		for(i=0;i<=gap-1;i++)
		{
			insert_sort(arr, len, gap, i);
		}
	}
}

int main(void)
{
    int a[11] = {5,3,8,7,10,4,6,9,1,2,3};
    int len = sizeof(a)/sizeof(a[0]);

    shell_sort(a, len);

    int i;
    for(i=0;i<len;i++)
    {
        printf("%d ", a[i]);
    }
	printf("\n");

    return 0;
}