#include<stdio.h>
int main(){
    int a;
    a=10;
    int b;
    b=20;

    if((a>10) && (b>5)){
        printf("a & b are grater than 5 \n");
    }
    else{
        printf("a & b are not greater than 5 \n");
    }

    if((a<5)&&(b<5)){
        printf("a is greater than or bequal to 5 \n");
    }
    else{
        printf("a & b are not greater than or equal to 5 \n");
    }
    int valid=0;
    int invalid=!valid;
    printf("The value of invalid is now valid:%d", invalid);
    return 0;

}
