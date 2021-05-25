#include <stdio.h>

int main() {
    char gen = 'F'; //F for female, M for Male
    int age = 35; //age of person.
    //scanf("%s gen:", &gen);
    //scanf("%d age:", &age);
    check(gen, age);
    return 0;
}
void check(gen, age){
    
    if(gen=='M'){
        if(age>=50){
            printf("Eligible");
        }else{
            printf("Not Eligible");
        }
    }
    else if(gen=='F'){
        if(age>=40){
            printf("Eligible");
        }else{
            printf("Not Eligible");
        }
    }else{
        printf("InValid Input");
    }
}