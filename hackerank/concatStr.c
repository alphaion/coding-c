#include<stdio.h>
#include <string.h>

int main()
{
    
    char one[100];
    char two[100];
    
    printf("Enter first String: ");
    scanf("%s",&one);
    printf("Enter second String: ");
    scanf("%s",&two);
    strcat(one, two);
    printf("Output: %s", one);
    return 0;
}