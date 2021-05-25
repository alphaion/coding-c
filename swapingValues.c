#include<stdio.h>

int main(){
    
    int a,c,d;
    printf("Enter C:");
    scanf("%d", &c);
    printf("Enter D:");
    scanf("%d", &d);
    
    a = c;
    c = d;
    d = a;
    printf("\nSwaping Values...\n\n");
    printf("The Value of C is: %d\n", c);
    printf("The Value of D is: %d\n", d);

}
    