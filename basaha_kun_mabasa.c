// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>


int main() {
    // Write C code here
    char text[500];
    printf("Text: ");
    fgets(text, sizeof(text), stdin);

    // printf("%s", t);
    int letters = 0;
    int words = 0;
    int sentences = 0;
    int len = strlen(text);
    // printf("%?
    for(int i = 0; i < len; i++) {
        if(isalpha(text[i])) {
            letters++;
        } 
        else if (text[i] == '.' || text[i] == '?' || text[i] == '!'){
            sentences++;
            
        }
        else if (isspace(text[i])) {
        if (isalpha(text[i - 1])) {
            words++;
        } else if (ispunct(text[i - 1]) && i > 1 && isalpha(text[i - 2])) {
            words++;
        } else if (ispunct(text[i - 1]) && i > 2 && ispunct(text[i - 2]) && isalpha(text[i - 3])) {
            words++;
        }
    }
        
    }
    printf("%lu\n", letters);
    printf("%d\n", sentences);
    printf("%lu\n", words);
    double l = ((double)letters / words) * 100;
    double s = ((double)sentences / words) * 100;
    double index = 0.0588 * l - 0.296 * s - 15.8;
    printf("%f\n", index);
    int i = (int)round(index);
    printf("%d\n", i);
    if (i < 1){
        printf("Before Grade 1");
    }
    else if (i > 15) {
        printf("Grade 16+");
    }
    else {
        printf("Grade %d", i);
    }
    return 0;
}
