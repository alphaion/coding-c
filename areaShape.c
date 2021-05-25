#include<stdio.h>

int main(){
    
    double length, breadth;
    double radius;
    
    printf("Enter length of Rectangle: ");
    scanf("%lf", &length);
    printf("Enter Breadth of Rectangle: ");
    scanf("%lf", &breadth);
    printf("Enter radius of Circle: ");
    scanf("%lf", &radius);
    
    double areaRect, periRect;
    double areaCir, circumCir;
    
    areaRect = (length*breadth);
    periRect = (2*(length + breadth));
    
    areaCir = (3.14*(radius*radius));
    circumCir = (2*3.14*radius);
    
    printf("Area of Rectangle: %lfsqunit\n", areaRect);
    printf("Perimeter of Rectangle: %lfsqunit\n", periRect); 
    printf("Area of Circle: %lfsqunit\n", areaCir);  
    printf("Circumference of Circle: %lfsqunit\n", circumCir);   
    
}
    