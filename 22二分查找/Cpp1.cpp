# include <stdio.h>

void guess(int * count)
{
    int isOK;
    printf("����������һ��1��100֮������֣����������1������");
    scanf("%d", &isOK);

    int low = 0;
    int high = 100;
    int mid = (low+high)/2;
    int flag;

	printf("��%d��\nС�������������1�����������������2���������������0��", mid);
	scanf("%d", &flag);
	(*count)++;

    while(flag != 0)
    {
		if(mid == 2)
		{
			printf("�Ǿ���1�ˣ����ǵĻ�˵���㷸����\n");
			(*count)++;
			break;
		}

		if(high-low == 0)
        {
            printf("���֣��㷸���ˣ���������������м�\n");
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
            printf("����,ֻ������0��1��2\n");
			(*count)--;
        }

		(*count)++;

        printf("��%d��\nС�������������1�����������������2���������������0��", mid);
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
		printf("������%d��\n", count);
		printf("�Ƿ������Y/N��:");
		scanf(" %c", &cont);
	}while(cont == 'y' || cont == 'Y');

    return 0;
}
