// Created by Andy Zhang on 10/21/2026.
//
#include <ctype.h>
#include <stdio.h>

int Phone_number_converter() {
    char phone_number[15] = "0-000-000-0000";
    printf("Enter your Phone number: ");
    fgets(phone_number, 15, stdin);
    for (int i = 0; i < 15; i++) {
        if (phone_number[i] == 'A' || 'B' || 'C') {
            phone_number[i] = '2';
        }
        else if
    }
}

int main(void) {
    Phone_number_converter();
    return 0;
}
// 4/12
// for every number,