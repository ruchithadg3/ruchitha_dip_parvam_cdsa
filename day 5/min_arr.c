#include<stdio.h>
int main()
{
    int a[]={7,2,1,3,4};
    int min=a[0]; //a[1]
    printf("%d", min);
    printf("\n");
    for(int i=1; i<5; i++)
    {
        printf("i= %d",i);
        printf("\n");
        if(min>a[i])
        {
            
            printf(" inside if: %d%d", min,a[i],"\n");
            min=a[i];
            printf("min value is: %d", min);
        }
    }
    printf("min is : %d " ,min);
    return 0 ;//end
}