#include<stdio.h>
int main(){
    char str[]="JYOTHISHWAR,RAVI!";
    int i=0;
    while (str[i]!='\0'){
        if (str[i]>='A'&& str[i]<='Z'){
            str[i]=str[i]-'A'+'a';
      }
      i++;


    }
    printf("lowercase string:%s\n",str);
    return 0;
}