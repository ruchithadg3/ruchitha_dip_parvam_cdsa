#include<stdio.h>
int main(){
    int  num=0,sum=0,digit;
    printf("enter the no:");
      scanf("%d\n",&num);
      while(num!=0){
        digit=num%10;
        sum+=digit;
        num/=10;
      }
      printf("enter the sum of digits:%d\n",sum);
      return 0;
}
 