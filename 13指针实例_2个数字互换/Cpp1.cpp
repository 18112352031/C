# include <stdio.h>

void swap(int * a, int * b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}

int main(void)
{
	int i = 3;
	int j = 5;
	char ch = 'ab';

	swap(&i, &j);

	printf("i = %d\nj = %d\n", i, j);
	printf("ch = %c\n", ch);

	return 0;
}