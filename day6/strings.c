#include<stdio.h>
int main(){
    char name[12];
    printf(" enter the name:");
    //scanf("%s",name);
    fgets(name,sizeof(name),stdin);
    printf("the name is : %s",name);
    return 0; 

} 