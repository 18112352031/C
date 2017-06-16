# include <stdio.h>

int main(void)
{
	int i = 2*2*2*2*2*2;
	int k = 10;
	int * p = &k;
	int * o;
	int * a;
	p = &i;
	//o = p;
	printf("*p = %d\n", *p); //输出*p也就是i的值
	printf("o = %x\n", o); //输出*o的内存地址，如果不分配内存地址，自动为cccccccc，又因为里面的值是垃圾值，所以不能被读写，运行后程序会报错
	printf("a = %x\n", a); //输出*a的内存地址
	printf("k = %d\n", k);
	return 0;
}