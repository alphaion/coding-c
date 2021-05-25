#include<stdio.h>

int main()
{
    int num,sum=0,r;
    printf("Enter number: ");
    scanf("%d", &num);
    while(num!=0) {
        r=num%10;
        num/=10;
        sum+=r;
    }
    printf("%d", sum);
}