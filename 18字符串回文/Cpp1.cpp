# include <stdio.h>
# include <string.h>

void Reverse(char * pArr)
{
	int len = strlen(pArr);
	int i = 0;
	int j = len-1;
	char c;
	while(i < j)
	{
		c = pArr[i];
		pArr[i] = pArr[j];
		pArr[j] = c;
		i++;
		j--;
	}
}

int isPalindromes(char * pArr)
{
	int i;
	int len = strlen(pArr);
	for(i=0;i<=len/2;i++)
	{
		if(pArr[i] != pArr[len-i-1])
		{
			break;
		}
	}
	if(i > len/2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main(void)
{
	char ch[100];
	printf("请输入要判断的字符串：");
	//scanf("%s", &ch);
	gets(ch);

	int flag = isPalindromes(ch);
	
	
	Reverse(ch);
	printf("倒过来是：%s\n", ch);

	if(flag == 1)
	{
		printf("是回文字符串\n");
	}
	else
	{
		printf("不是回文字符串\n");
	}
	
	return 0;
}