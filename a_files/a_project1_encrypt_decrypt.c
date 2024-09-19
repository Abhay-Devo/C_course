#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to perform XOR encryption
void encrypt(char *plaintext, char *key) {
    int len = strlen(plaintext);
    int keylen = strlen(key);
    for (int i = 0; i < len; i++) {
        plaintext[i] ^= key[i % keylen];
    }
}

// Function to perform XOR decryption
void decrypt(char *ciphertext, char *key) {
    int len = strlen(ciphertext);
    int keylen = strlen(key);
    for (int i = 0; i < len; i++) {
        ciphertext[i] ^= key[i % keylen];
    }
}

int main() {
    char plaintext[1000];
    char key[9]; // 8-word unique key
    char ciphertext[1000];

    // Input plaintext and key from user
    printf("Enter plaintext: ");
    fgets(plaintext, sizeof(plaintext), stdin);
    // Clear input buffer
    while (getchar() != '\n');

    printf("Enter 8-word unique key: ");
    fgets(key, sizeof(key), stdin);
    // Clear input buffer
    while (getchar() != '\n');

    // Remove newline characters
    plaintext[strcspn(plaintext, "\n")] = '\0';
    key[strcspn(key, "\n")] = '\0';

    // Encrypt the plaintext
    strcpy(ciphertext, plaintext); // Make a copy of plaintext
    encrypt(ciphertext, key);

    printf("Encrypted text: %s", ciphertext);
    printf("\n\n");

    // Decrypt the ciphertext
    char x[9]; // Define x as an array of characters to store the input key
    printf("Enter the unique key to decrypt the text: ");
    fgets(x, sizeof(x), stdin); // Read the key from the user
    x[strcspn(x, "\n")] = '\0'; // Remove newline character

    if (strcmp(x, key) == 0) {
        decrypt(ciphertext, key);
        printf("\nDecrypted text: %s\n", ciphertext);
    } else {
        printf("You entered the wrong unique key to decrypt the message!!\nTry again.\n");
    }

    return 0;
}
