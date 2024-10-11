// Online C compiler to run C program online
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main() {
    // Write C code here
    int k;
    
    
    printf("Key: ");
    // scanf("%d", &k);
    if (scanf("%d", &k) != 1) {
        return 1;
    }
    
    char pt[500];
    printf("plaintext: ");
    scanf("%s", pt);
    int len = strlen(pt);
    char ct[len];
    for (int i = 0; i < len; i++) {
        if(isalpha(pt[i])) {
            int d = islower(pt[i])? 'a': 'A';
            int n = pt[i] - d + k;
            ct[i] = n % 26 + d;
        } else {
            ct[i] = pt[i];
        }
    }
    printf("\nciphertext: %s", ct);
    return 0;
}
