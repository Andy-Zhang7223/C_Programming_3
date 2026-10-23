// Created by Andy Zhang on 10/21/2026.
//
#include <ctype.h>
#include <stdio.h>

int Scrabble_Point_Calculator() {
    char Word[16] = "";
    int score = 0;
    printf("Enter a word: ");
    fgets(Word, 16, stdin);
    for (int i = 0; Word[i] != '\0'; i++) {
        Word[i] = toupper(Word[i]);
        //Letters worth 1: A, E, I, L, N, O, R, S, T, U
        switch (Word[i]) {
            case 'A':
            case 'E':
            case 'I':
            case 'L':
            case 'N':
            case 'O':
            case 'R':
            case 'S':
            case 'T':
            case 'U':
                ++score;
                break;
                //Letters worth 2:
            case 'D':
            case 'G':
                score = score + 2;
                break;
                //Letters worth 3: B, C, M, P
            case 'B':
            case 'C':
            case 'M':
            case 'P':
                score = score + 3;
                break;
                //Letters worth 4: F, H, V, W, Y
            case 'F':
            case 'H':
            case 'V':
            case 'W':
            case 'Y':
                score = score + 4;
                break;
                //Letters worth 5:
            case 'K':
                score = score + 5;
                break;
                //Letters worth 8:
            case 'J':
            case 'X':
                score = score + 8;
                break;
                //Letters worth 10:
            case 'Q':
            case 'Z':
                score = score + 10;
                break;
        }
    }
    printf("The score is %d.\n", score);
}

int main(void) {
    Scrabble_Point_Calculator();
    return 0;
}