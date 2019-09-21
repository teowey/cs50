//
// Created by Teodoro Orlow Wey on 2019-08-19.
//
/*
 *  Name: vigenere
 *
 *  Description: Encoder for encrypting messages
 *
 */
#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

/*
 *  Function signatures
 */
int shift(char c);

int main(int argc, string argv[]) {
    /* Check if input is only one argument */
    if (argc != 2) {
        printf("Usage: ./vigenere keyword\n");
        return 1;
    }


    string keyword = argv[1];
    int length = strlen(keyword);

    /*
     *  Checks if input only has characters
     *
     *  (numbers are not allowed in the keyword)
    */
    for (int i = 0; i < length; i++) {
        if (isdigit(keyword[i])) {
            printf("Usage: ./vigenere keyword\n");
            return 1;
        }
    }


//    string plaintext = get_string("plaintext: ");
//    int plain_len = strlen(plaintext);
//    char ciphertext[plain_len];
//    int shift_char; /* To calculate the ciphertext below and rotate */



//    printf("ciphertext: ");
//    for (int i = 0; i < plain_len; i++)
//    {
//        /*
//         * This is to check if it's in the capital or small letter range.
//         * It is needed to change the calculation for the ciphertext rotation.
//         *
//         */
//        if ((plaintext[i] >= 'a' && plaintext[i] <= 'z'))
//        {
//            shift_char = 'a';
//            ciphertext[i] = ((plaintext[i] - shift_char + k) % 26) + shift_char;
//            printf("%c", ciphertext[i]);
//        }
//        else if ((plaintext[i] >= 'A' && plaintext[i] <= 'Z'))
//        {
//            shift_char = 'A';
//            ciphertext[i] = ((plaintext[i] - shift_char + k) % 26) + shift_char;
//            printf("%c", ciphertext[i]);
//        }
//        else
//        {
//            printf("%c", plaintext[i]); /* Easy case: If it is not a letter (1 or 2 or , or ! and so on) */
//        }
//    }

    printf("\n");
    return 0;
}

/*
 * Function to calculate the keyword shift, for ex.,
 *  A or a would be 0,
 *  B or b would be 1,
 *  ...
 *  Z or z would be 25, etc.
 */
int shift (char c)
{
    return (int) (tolower(c) - 'a');
}