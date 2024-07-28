#include <stdio.h>

int main() {
    int arr[5] = {2, 4, 6, 8, 10}; // creates an array of 5 integers and initializes its values
    int i;
    
    printf("The values of the array are: \n");
    
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]); // prints the value of each element in the array
    }
    
    return 0;
}

