#include<stdio.h>

int main(){
    int arr[]={93,43,55,65,45,76,34};
    int n= sizeof(arr)/sizeof(arr[0]);
    int i,j,temp;
    printf("original array is:");
    for(i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(i=0; i<n; i++){
       for(j=0; j<n; j++){
         if(arr[j]>arr[j+1]){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            
        }     
    }

}
printf("Srted Array:");
for(i=0; i<n; i++){
    printf("%d ",arr[i]);

}
printf("\n");
return 0;
}