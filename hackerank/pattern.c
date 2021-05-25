#include<stdio.h>

int main()
{
    int row, col, first=0, sec=1, sum=1;
    
    for(row=1;row<=4;row++){
        for(col=1;col<=row;col++){
            if(row == 1 && col == 1){
                printf("0");
                continue;
            }
            printf("%d\t",sum);
            sum = first + sec;
            first = sec;
            sec = sum;
        }
        printf("\n");
    }
    
}