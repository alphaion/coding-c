#include<stdio.h>

int main()
{
    int i,n,t1=0,t2=1,nT;
    printf("Enter nth term: ");
    scanf("%d", &n);
    for(i=0;i<=n;i++) {
        printf("%d ",t1);
        nT = t1 + t2;
        t1 = t2;
        t2 = nT;
    }
    
}