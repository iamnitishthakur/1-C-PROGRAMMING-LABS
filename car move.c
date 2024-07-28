#include <stdio.h>

int main() {
    int position = 0; // car's initial position
    int speed = 10; // car's speed in meters per second
    int time = 0; // elapsed time in seconds
    
    printf("Car starting at position %d\n", position);
    
    // simulate car moving for 10 seconds
    for (time = 1; time <= 10; time++) {
        position += speed; // calculate new position
        printf("After %d seconds, car is at position %d\n", time, position);
    }
    
    printf("Car has finished moving.\n");
    
    return 0;
}

