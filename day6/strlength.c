#include<stdio.h>
#include<string.h>
int main(){
    char str[100]="hello";
    int length=0;
    while(str[length]!='\0')
    {
        length++;
    }
    printf("the length of str without inbult is %d\n",length);
    printf("the length of str with inbult fun is %d\n",strlen(str));
    return 0;
    }