#include<stdio.h>

int main(){
    
    int temp;
    double c;
    printf("Enter Temperature in Fahrenheit: ");
    scanf("%d", &temp);
    
    c = ("%d", (temp-32)*5/9);
    printf("Temperature in Celsius: %lf°C", c);
}
    