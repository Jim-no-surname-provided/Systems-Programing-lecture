#include <stdio.h>

int main() {
    int c;

    while((c = getchar()) != EOF) { // read until end of input
        if( c >= 97 && c <= 122) // if letter, change case
            c &= ~(1UL << 5);
        putchar(c);
    }
    return 0;
}
