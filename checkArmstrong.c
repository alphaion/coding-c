#include<stdio.h>

void main()
{
    int num,t,sum=0,cube=1,r;
   
    printf("Enter number: ");
    scanf("%d", &num);
    t=num;
    while(num!=0){
        
        r = num%10;
        cube = r*r*r;
        num/=10;
        sum=sum+cube;
        
    }
    if(t==sum){
        printf("Armstrong Number");
    }
    else{
        printf("Not Armstrong Number");
    }
    }