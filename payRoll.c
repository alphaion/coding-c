#include<stdio.h>
int main()
{
    payRoll();
}
payRoll(name, bS, dN){
    int i;
    //int bS;
    //char name, dN;
    printf ("Payroll System Starts...\n");
    for (i=1;i<=10;i++){
        printf ("Enter Name %d: ",i);
        scanf("%s", &name);
        printf ("Enter Basic Salary %d: ",i);
        scanf("%d", &bS);
        printf ("Enter Designation %d: ",i);
        scanf("%s", &dN);
    }
    
}