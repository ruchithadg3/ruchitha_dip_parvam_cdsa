#include<stdio.h>
int main(){
    int a=10;
    int b=2;
    int c=b&a;
    printf("%d\n",c);
    printf("%d",sizeof(c));
    int d=a++;
    printf("%d\n",d); 
    int e=++a;
     printf("%d\n",e);
     int f=a++ + ++b;
      printf("%d\n",f);
      int g=++a + b++;
       printf("%d\n",g);
    return 0;
}