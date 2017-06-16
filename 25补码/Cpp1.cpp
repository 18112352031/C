# include <stdio.h>

int main(void)
{
	int max = 0x7FFFFFFF;
	int min = 0x80000000;
	int test = min - 1;
	printf("%d\n", max);
	printf("%d\n", min);
	printf("%d\n", test);

	return 0;
}