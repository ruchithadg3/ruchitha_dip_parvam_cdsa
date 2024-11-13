#include<stdio.h>
#include<string.h>
int main(){
    struct person{
        char name[20];
        int age;
        float marks;
    };
    struct person p1;
    printf("Enter user name:");
    fgets(p1.name,sizeof(p1.name),stdin);
    p1.name[strcspn(p1.name,"\n")]=0;
    printf("Enter marks:");
    scanf("%f",&p1.marks);
    printf("enter age:");
    scanf("%d",&p1.age);
    printf(" age is %d\n",p1.age);
    printf(" name is %s\n",p1.name);
    printf(" marks is %.2f",p1.marks);
    return 0;
}