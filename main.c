// Created by Andy Zhang on 10/21/2026.
//
#include <stdio.h>

int GCF_finder() {
    int x = 0;
    int y = 0;
    int smaller_integer = 0;
    int GCF = 0;
    printf("Enter your first number: \n");
    scanf("%d", &x);
    printf("Enter your second number: \n");
    scanf("%d", &y);
    if (x<y) {
        smaller_integer = x;
    }
    else {
        smaller_integer = y;
    }
    for (int i = 1; i <= smaller_integer; i++) {
        if (x%i == 0 && y%i == 0) {
            GCF = i;
        }
        else {
            continue;
        }
    }
    printf("GCF is %d\n", GCF);
}

int main(void) {
    GCF_finder();
    return 0;
}