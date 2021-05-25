#include<stdio.h>

int main()
{
    int i,c,d;
    //initialise order of first matrix
    //m = rows, n = column
    int m,n,a;
    printf("Enter row of First Matrix: ");
    scanf("%d", &m);
    printf("Enter column of First Matrix: ");
    scanf("%d", &n);
    //a = number of input
    a=m*n
      //initialise order of second matrix
      //p = rows, q = column
      int p,q,b;
    printf("Enter row of Second Matrix: ");
    scanf("%d", &p);
    printf("Enter column of Second Matrix: ");
    scanf("%d", &q);
    //b = number of input
    b=p*q;
    //p=n should be equal
    //initialise c
    c=1;
    d=1;
    if(n==p) {
        printf("Lets move Forward");
        for(int i; i<=a; i++) {
            for(int c;c<=m;c++){
                for(int d;d<=n;d++){
                    printf("Enter A[%d%d]",c,d);
                    scanf("%d");
                }
            }
        }

    } else {
        printf("Your Input is against the rule!");
    }
}