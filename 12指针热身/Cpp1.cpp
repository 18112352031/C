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
	printf("*p = %d\n", *p); //���*pҲ����i��ֵ
	printf("o = %x\n", o); //���*o���ڴ��ַ������������ڴ��ַ���Զ�Ϊcccccccc������Ϊ�����ֵ������ֵ�����Բ��ܱ���д�����к����ᱨ��
	printf("a = %x\n", a); //���*a���ڴ��ַ
	printf("k = %d\n", k);
	return 0;
}