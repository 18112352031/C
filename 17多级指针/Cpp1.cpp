# include <stdio.h>

void f(int ** q)
{
	int i = 10;
	*q = &i; //*q等价于p
}

int main(void)
{
	int * p;
	f(&p);
	printf("%d\n", *p);

	return 0;
}

/*
------------------------
这个程序虽然没有报错，但
在逻辑上是错的，因为f被调
用完后就被释放了，i也被释
放了，p不能指向一个被释放
的变量。
------------------------
*/