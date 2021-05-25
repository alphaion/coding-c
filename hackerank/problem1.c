#include<stdio.h>

int main()
{
    char text[100];
    gets(text);
    printf("Hello, World!");
    printf("\n%s", text);
}