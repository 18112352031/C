# include <stdio.h>

void guess(int * count)
{
    int isOK;
    printf("请在心里想一个1到100之间的数字，想好了输入1继续：");
    scanf("%d", &isOK);

    int low = 0;
    int high = 100;
    int mid = (low+high)/2;
    int flag;

	printf("是%d吗\n小于这个数就输入1，大于这个数就输入2，是这个数就输入0：", mid);
	scanf("%d", &flag);
	(*count)++;

    while(flag != 0)
    {
		if(mid == 2)
		{
			printf("那就是1了，不是的话说明你犯规了\n");
			(*count)++;
			break;
		}

		if(high-low == 0)
        {
            printf("别闹，你犯规了，你想的数就在这中间\n");
			break;
        }

        if(flag == 1)
        {
			high = (low+high)/2;
            mid -= (high-low)/2;
            if(high-low == 1)
            {
                mid -= 1;
				high--;
            }
			 
            //printf("low = %d\n", low);
            //printf("high = %d\n", high);
        }
        else if(flag == 2)
        {
			low = (low+high)/2;
            mid += (high-low)/2;
            if(high-low == 1)
            {
                mid += 1;
				low++;
            }
			
            //printf("low = %d\n", low);
            //printf("high = %d\n", high);
        }
        else if(flag == 0)
        {
            break;
        }
        else
        {
            printf("别闹,只能输入0、1或2\n");
			(*count)--;
        }

		(*count)++;

        printf("是%d吗\n小于这个数就输入1，大于这个数就输入2，是这个数就输入0：", mid);
        scanf("%d", &flag);

    }
}

int main(void)
{
    char cont;
	do
	{
		int count = 0;
		guess(&count);
		printf("共猜了%d次\n", count);
		printf("是否继续【Y/N】:");
		scanf(" %c", &cont);
	}while(cont == 'y' || cont == 'Y');

    return 0;
}
