//
// Created by Teodoro Orlow Wey on 2019-08-19.
//
#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>
int main(int argc, string argv[])
{
    // Check if input is
    if (argc != 2) {
        printf("Usage: ./vigenere keyword\n");
        return 1;
    }
    //int k = atoi(argv[1]);
    string keyword = argv[1];
    int length = strlen(keyword);
    for (int i = 0; i < length; i++) {
        if (isdigit(keyword[i])) {
            printf("Usage: ./vigenere keyword\n");
            return 1;
        }
    }

    printf("Success\n");
    return 0;
}