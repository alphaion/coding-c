#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y,change(int*, int*);
    printf("\nEnter values of X and Y: ");
    scanf("%d%d", &x, &y);
    change(&x,&y);
    printf("\n In main() X=%d Y=%d", x, y);
}

change(int*a, int*b) {
    int*k;
    *k=*a;
    *a=*b;
    *b=*k;
    printf("\n In change() X=%d Y=%d", *a, *b);
    return;
}