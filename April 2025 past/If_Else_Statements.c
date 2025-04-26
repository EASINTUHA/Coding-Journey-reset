#include <stdio.h>

int main() {
    int age = 25;
    int voting_age = 18;
    
    if (age > voting_age) {
        printf("Old enough to vote!");
    } else {
        printf("Not old enough to vote.");
    }
    return 0;
}