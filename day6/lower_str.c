#include<stdio.h>
#include<string.h>
int main(){
    char a[50]="HELLO";
    char c[70]="world";
    char b[50];
    strcpy(b,a);
    printf(" copied is %s",b);
    printf("length of cpy str is %d\n",strlen(b));
    strcat(a,b);
    printf("concatinated str1 %s\n",a);
    strcat(b,c);
    printf("concatinated str2 %s\n",b);
    int res=strcmp(a,b);
    printf("%d\n",res);
    if(res==0){
        printf("both strings are equal");
    }
    else if(res==-1){
        printf("string1 is lesser than string2\n");
    }
    else{
        printf("string1 is the greater than string2\n");
    }
    printf("%s\n",strrev(a));
    for (int i=0; a[i]!='\0';i++){
        a[i]=tolower(a[i]);
    }
    printf("%s",a);
    return 0;

}