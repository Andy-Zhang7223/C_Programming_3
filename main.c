// Created by Andy Zhang on 10/21/2026.
//
#include <ctype.h>
#include <stdio.h>

int Phone_number_converter() {
    char phone_number[15] = "0-000-000-0000";
    printf("Enter your Phone number: ");
    fgets(phone_number, 15, stdin);
    for (int i = 0; i < 15; i++) {
        if (phone_number[i] == 'A' || phone_number[i] == 'B' || phone_number[i] == 'C') {
            phone_number[i] = '2';
        }
        else if (phone_number[i] == 'D' || phone_number[i] == 'E' || phone_number[i] == 'F') {
            phone_number[i] = '3';
        }
        else if (phone_number[i] == 'G' || phone_number[i] == 'H' || phone_number[i] == 'I') {
            phone_number[i] = '4';
        }
        else if (phone_number[i] == 'J' || phone_number[i] == 'K' || phone_number[i] == 'L') {
            phone_number[i] = '5';
        }
        else if (phone_number[i] == 'M' || phone_number[i] == 'N' || phone_number[i] == 'O') {
            phone_number[i] = '6';
        }
        else if (phone_number[i] == 'P' || phone_number[i] == 'R' || phone_number[i] == 'S') {
            phone_number[i] = '7';
        }
        else if (phone_number[i] == 'T' || phone_number[i] == 'U' || phone_number[i] == 'V') {
            phone_number[i] = '8';
        }
        else if (phone_number[i] == 'W' || phone_number[i] == 'X' || phone_number[i] == 'Y') {
            phone_number[i] = '9';
        }
        else {
            continue;
        }
    }
    printf("Your Phone number is: %s\n",phone_number);
}

int main(void) {
    Phone_number_converter();
    return 0;
}