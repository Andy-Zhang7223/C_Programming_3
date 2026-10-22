// Created by Andy Zhang on 10/21/2026.
//
#include <stdio.h>

int Fraction_Simplifier() {
    char fraction[6] = "";
    int numerator = 0;
    int denominator = 0;
    int smaller_integer = 0;
    int GCF = 0;
    printf("Enter a fraction: ");
    fgets(fraction, sizeof(fraction), stdin);
    numerator = (fraction[0] - '0') * 10 + (fraction[1] - '0');
    denominator = (fraction[3] - '0') * 10 + (fraction[4] - '0');
    if (numerator > denominator) {
        smaller_integer = denominator;
    }
    else {
        smaller_integer = numerator;
    }
    for (int i = 1; i <= smaller_integer; i++) {
        if (numerator % i == 0 && denominator % i == 0) {
            GCF = i;
        }
    }
    numerator = numerator / GCF;
    //Breaks here
    denominator = denominator / GCF;
    printf("Simplified fraction: %d/%d \n", numerator, denominator);
}

int main(void) {
    Fraction_Simplifier();
    return 0;
}