#include<stdio.h>

int main()
{
    int a,b;
    float m,n;
    scanf("%d %d", &a, &b);
    scanf("%f %f", &m, &n);
    printf("%d %d", a+b, a-b);
    printf("\n%.1f %.1f", m+n, m-n);
    
}