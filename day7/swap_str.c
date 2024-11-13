#include<stdio.h>
int main(){
    char str[]="Hello World";
    int start =0;
    int end =strlen(str)-1;
    char temp;
    while (start < end){
        temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
        }
    printf("reversed string: %s\n",str);
    return 0;
}