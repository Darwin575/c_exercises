#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char c[27];
    printf("Key: ");  
    fgets(c, sizeof(c), stdin); 
    int len = strlen(c);
    if (len > 0 && c[len - 1] == '\n') {
        c[len - 1] = '\0';
        len--; 
    }

    
    if (len != 26) {
        printf("Error: Must contain exactly 26 letters.\n");
        return 1;
    }

    
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len; j++) {
            if (i == j) {
                continue;
            } else if (c[i] == c[j]) {
                printf("Error: Must contain no duplicate letters.\n");
                return 1;
            }
        }

        if (!isalpha(c[i])) {
            printf("Error: Must not contain special characters or numbers.\n");
            return 1;
        }
    }
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
 
    char plaintext[256];
    printf("plaintext: "); 
    fgets(plaintext, sizeof(plaintext), stdin);  

    
    int plain_len = strlen(plaintext);
    if (plain_len > 0 && plaintext[plain_len - 1] == '\n') {
        plaintext[plain_len - 1] = '\0';
    }

    char ciphertext[plain_len];
    for (int i = 0; i < plain_len; i++) {
        if(isalpha(plaintext[i])) {
            char b = islower(plaintext[i]) ? 'a' : 'A';
            int n = plaintext[i] - b;
            ciphertext[i] = islower(plaintext[i])? tolower(c[n]): toupper(c[n]);
        } else {
            ciphertext[i] = plaintext[i];
        }
    }
    printf("ciphertext: %s\n", ciphertext);


    return 0;
}
