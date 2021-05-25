#include<stdio.h>

int main()
{
    int num,i;
    int arr[10];
    deciToBin(num);
}
int deciToBin(num,bin){
    int arr[10];
    int i;
    printf("Enter Number: ");
    scanf("%d", &num);
   // printf("%d",num);
    
    for(i=0;num>0;i++){
        arr[i] = num%2;
        num = num/2;
    }
    printf("Binary: ");
    for(i=i-1;i>=0;i--){
    
        printf("%d",arr[i]);
    }
    
    
}