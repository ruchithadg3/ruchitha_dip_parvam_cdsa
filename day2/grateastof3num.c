#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("enter the three no");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    

    if(a<b && a>c){
        printf("a is greater then b");
    }
    else if(b>c && b>c)
    {
        printf("b is greater than c");
    }
    else 
    {
       printf("c is greatest");
    }
}