#include<stdio.h>
int main(){
    int num,rev=0;
    printf("enter the no");
    scanf("%d",&num);
    int org=num;
    while(num>0)
    {
        rev=rev*10+num%10;
    
        num=num/10;
    }
    
    
    if(org==rev)
    {
        printf("%d a palindrome",org);
    }
    else{
        printf("%d is not a palindrome,because%d is not matching the patter:%d",org,org,rev);

    }

}
    
       