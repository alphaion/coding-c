#include<stdio.h>

void main()
{
    int num,r,rev=0,abc;
   
    printf("Enter number: ");
    scanf("%d", &num);
    abc=num;
    while(num>0){
        
        r = num%10;
        num/=10;
        rev=rev*10+r;
    
    }
    if(abc==rev){
        printf("Palindrome Number");
    }
    else{
        printf("Not Palindrome Number");
    }
    }