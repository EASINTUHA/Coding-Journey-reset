#include <stdio.h>

int main() {
    float height = 1.82;
    float weight = 72;
    float bmi = weight / (height * height);
    printf("%.6f\n", bmi);
    return 0;
}