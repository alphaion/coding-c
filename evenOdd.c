#include<stdio.h>

int main(){
    
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num%2==0){
        printf("%d is Even Number", num);
    }
    else if (num%2!=0){
        printf("%d is Odd Number", num);
    }
    else{
        printf("Invalid Input");
    }

}
