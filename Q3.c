//Program to convert ft to sqft
#include <stdio.h>
int main() {
    float sqft;
    scanf("%f",&sqft);
    printf("%.2f sq.ft is equal to %.2f acres",sqft,sqft/43560);
    return 0;
}