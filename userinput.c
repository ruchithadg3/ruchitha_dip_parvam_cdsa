#include<stdio.h>
void main()
{
    int a;
    int b;
    int c;
    printf("enter two numbers:");
    scanf("%d",&a);
    scanf("%d",&b);
    c=a+b;
    printf("sum of two nos are as follows: \n");
    printf("%d\n",c);

    float f;
    printf("Enter float value:");
    scanf("%f",&f);
    printf("Value of float: %f\n", f);

    char str[30];
    printf("Enter some character:");
    scanf("%s",&str);
    printf("Value of char: %s", str);
}