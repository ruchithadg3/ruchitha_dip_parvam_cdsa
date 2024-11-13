#include<stdio.h>
#include<string.h>
int main(){
    struct address(){
    char street[20];
    char city[20];
    char state[20];
};
    struct person{
        int age;
        char name[20];
        struct Address address;
    };
    int main(){
    struct person person;

    printf("Enter name:");
    scanf("%s",person.name);

    printf("enter age:");
    scanf("%d",&person.age);

    printf("enter street");
    scanf("%s",&person.address.street);

    printf("enter city");
    scanf("%s",person.address.city);

    printf("Enter state");
    scanf("%s",person.address.state);

    printf(" name is %d\n",person.name);
    printf(" age is %s\n",person.age);
    printf(" street is %.2f",person.address.street);
    }
    return 0;
}