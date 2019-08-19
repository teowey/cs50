#include <stdio.h>
#include <cs50.h>
#include <string.h>

/* caesar.c
 *
 * Prints a rotated cyphertext from input plaintext with a key (k).
 *
*/
int main(int argc, string argv[]) {

    // Check if input is
    if (argc != 2) {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    int k = atoi(argv[1]);

    // TODO: Check if input is integer!
    string plaintext = get_string("plaintext: ");
    int plain_len = strlen(plaintext);
    char ciphertext[plain_len];
    int shift_char; // To calculate the ciphertext below and rotate

    /*
     * TODO: This section below must be refactored as a function
     *
     */
    printf("ciphertext: ");
    for (int i = 0; i < plain_len; i++)
    {
        // This is to check if it's in the capital ir small letter range.
        // It is needed to change the calculation for the ciphertext rotation.
        if ((plaintext[i] >= 'a' && plaintext[i] <= 'z'))
        {
            shift_char = 'a';
            ciphertext[i] = ((plaintext[i] - shift_char + k) % 26) + shift_char;
            printf("%c", ciphertext[i]);
        }
        else if ((plaintext[i] >= 'A' && plaintext[i] <= 'Z'))
        {
            shift_char = 'A';
            ciphertext[i] = ((plaintext[i] - shift_char + k) % 26) + shift_char;
            printf("%c", ciphertext[i]);
        }
        else
        {
            printf("%c", plaintext[i]); // Easy case: If it is not a letter (1 or 2 or , or ! and so on)
        }
    }

    printf("\n");
    return 0;
}