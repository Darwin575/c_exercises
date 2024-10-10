// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int ihap(char *p, int les, char *l, int *s) {
    int le = strlen(p);
    int t = 0;
    for(int i = 0; i < le; i++) {
        for(int j = 0; j < les; j++) {
            if(tolower(p[i]) == tolower(l[j]))
                t += s[j];
        }
    }
    return t;
}
int main() {
    // Write C code here
    int s[] = {1, 3, 3,	2, 1, 4, 2,	4, 1, 8, 5,	1, 3, 1, 1,	3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    
    char l[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    int les = sizeof(s)/ sizeof(s[0]);
    char p1[20];
    char p2[20];
    printf("Player 1: ");
    scanf("%s", p1);
    printf("Player 2: ");
    scanf("%s", p2);
    int ps1 = ihap(p1, les, l, s);
    int ps2 = ihap(p2, les, l, s);
    printf("Player 1 = %d\t", ps1);
    printf("Player 2 = %d\n", ps2);
    if (ps1 > ps2) {
        printf("Player 1 wins!");
    } else if (ps1 < ps2) {
        printf("Player 2 wins!");
    } else {
        printf("Tie!");
    }


    return 0;
}
