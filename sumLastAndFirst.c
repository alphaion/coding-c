#include<stdio.h>

int main()
{
    int l,f,sum=0,i,length;
    printf("Length of Array: ");
    scanf("%d ", &length);
    int arr[length];
    
    for(i=0;i<=length-1;i++){    
        printf("\nEnter Array [%d]: ",i);
        scanf("%d", &arr[i]);
    }
       l=arr[length-1];
       f=arr[0];
       sum = l+f;  
       //printf("\n%d %d", l,f);
       printf("\nSum of First and Last digit is %d", sum);
}


    