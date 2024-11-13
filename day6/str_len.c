#include<stdio.h>
int main(){
    char name[12];
    printf(" enter the name:");
    //scanf("%s",name);
    fgets(name,sizeof(name),stdin);
    str[strcspn(str,"\n")]=0;
    printf("the name is : %s",name);
    int length=strlen(name);
    printf("%d is the length of string ",length-1);
    return 0; 

} 