#include<stdio.h>
int main(){
    int num=123,rev=0;
      scanf("%d\n",&num);
      while(num!=0){
      rev=rev*10+num%10;
        num=num/10;
      }
      printf("the reverse of no is: %d\n",rev);
}
 

