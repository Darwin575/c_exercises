// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int c;
    int n;
    do {
    printf("Change owed: ");
    scanf("%d", &c);
    } while (c <= 0);
    
    while (c != 0) {
        
        if(c >= 25) {
            c -= 25;
            n++;
        } 
        else if(c >= 10){
            c -= 10;
            n++;
          
        }
        else if(c >= 5) {
            c -= 5;
            n++;
         
        }
        else if(c >= 1) {
            c -= 1;
            n++;
        }
    }
    
    printf("\n%d", n);

    return 0;
}
