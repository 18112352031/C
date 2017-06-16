# include <stdio.h>

struct Student
{
	char name;
	int age;
}; //ÒªÓĞ·ÖºÅ

int main(void)
{
	struct Student stu1 = {'a', 18};
	struct Student * pstu1 = &stu1;
	pstu1->name = 'x';
	pstu1->age = 20;
	printf("%c %d\n", stu1.name, stu1.age);

	return 0;
}