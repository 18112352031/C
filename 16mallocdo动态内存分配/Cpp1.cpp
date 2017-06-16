# include <stdio.h>
# include <malloc.h>

int main(void)
{
	//int * p = (int *)malloc(1);
	//*p = 5555555;
	//printf("%d\n", *p);
	//printf("%d\n", p);

	int len = 4;
	int * pArr = (int *)malloc(len * 4); //pArr[len]
	pArr[0] = 1;
	pArr[1] = 2;
	pArr[2] = 3;
	pArr[3] = 4;
	int i;
	for(i=0;i<len;i++)
	{
		printf("%d ", pArr[i]);
	}

	printf("\n");

	int * pArr_new = NULL;
	pArr_new = (int *)realloc(pArr, len++ * 4);
	if(pArr_new != NULL)
	{
		pArr = pArr_new;
		pArr[len-1] = 5;
	}
	for(i=0;i<len;i++)
	{
		printf("%d ", pArr[i]);
	}

	return 0;
}