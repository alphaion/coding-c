#include<stdio.h>

int main(){
    
    double num;
    printf("Enter a Distance in km: ");
    scanf("%lf", &num);
    
    printf("Distance: %lf m\n", num*1000);
    printf("Distance: %lf feet\n", num*3280);
    printf("Distance: %lf inches\n", num*39270);
    printf("Distance: %lf cm\n", num*100000);
    

}
    