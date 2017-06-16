# include <stdio.h>

int main(void)
{
	int i = 5;
	double d[2] = {1.1, 1.2};
	char ch = 'a';
	//printf("%d %d %d", sizeof(i), sizeof(d), sizeof(ch));
	printf("%d\n%d\n%d\n", &d[0], &d[1], i);

	return 0;
}