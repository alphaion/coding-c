#include<stdio.h>

int main()
{
    int num,i,f,temp,sum=0;
    printf("Number: ");
    scanf("%d", &num);
    temp=num;
    while(temp!=0) {
        f=1;
        //printf("%d %d %d\n", r, num, digit);
        for(i=1; i<=temp%10; i++) {         
            f=f*i;
        }
        sum = sum+f;
        temp = temp/10;
     //printf("%d\n", sum);
    }
    if(num==sum){
        printf("Special Number");
    }
    else{
        printf("Not a Special Number");
    }
    //printf("%d", sum);
}


    