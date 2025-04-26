#include <stdio.h>

int main() {
    int age = 25;
    int voting_age = 18;
    
    if (age >= voting_age) {
        printf("Old enough to vote!\n");
    } else {
        printf("Not old enough to vote.");
        printf("Wait for %d years", voting_age - age);
    }
}
