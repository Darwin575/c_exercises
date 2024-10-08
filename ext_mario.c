#include <stdio.h>

int main() {
    int c;
    do{
        printf("Height: ");
        scanf("%d", &c);
    } while(c < 1 || c > 8);
    int y = c * 2 + 2;
    
    for (int i = 0; i < c; i++) {
        for (int j = 0; j <= y; j++) {
            if(c > j + i + 1)
                printf(" ");
            else if(j < c)
                printf("#");
            else if(j > c && j < c + 2)
                printf(" ");
            else if(j > c + 2 && c - i <= y - j + 1)
                printf("#");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
