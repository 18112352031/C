# include<stdio.h>
# include<math.h>

int main(void)
{
    float a, b, c, d, x1, x2;
    char state;

    printf("请输入a的值\n");
    scanf("%f", &a);

    printf("请输入b的值\n");
    scanf("%f", &b);

    printf("请输入c的值\n");
    scanf("%f", &c);

    d = b*b - 4*a*c;

    //printf("%f\n",d);

    if(d > 0)
    {
        x1 = (-b + sqrt(d)) / (2*a);
        x2 = (-b - sqrt(d)) / (2*a);
        printf("x1 = %f, x2 = %f\n", x1, x2);
    }
    else if(d == 0)
    {
        x1 = x2 = (-b + sqrt(d)) / (2*a);
        printf("x1 = x2 = %f\n", x1);
    }
    else
    {
        printf("无解\n");
    }

    return 0;
}
