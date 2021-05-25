#include<stdio.h>

int main() {

    int index = 4; //number
    int delIndex = index-1; //2

    int arr[5] = {2,5,8,9,2};
    //indexing start from 0, we should
    //delete number 1 indexing at 2
    printf("Given Array: ");
    for(int ind=0; ind<5; ind++) {
        printf("%d", arr[ind]);
    }
    printf("\n\nEntered Position: %d",index);

    printf("\n\ndeleting the number...");
    printf("\n\nNew Array: ");
    for(int ind=0; ind<5; ind++) {
        if(arr[ind] == arr[delIndex]) {
            arr[ind] = (arr[ind]-arr[delIndex]);
            for(int x=0; x<5; x++) {
                if(arr[x] != 0) {
                    printf("%d", arr[x]);
                }
            }

        }

    }

}