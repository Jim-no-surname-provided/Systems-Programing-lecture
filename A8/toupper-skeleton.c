#include <stdio.h>

int main() {
    int c;

    while((c = getchar()) != EOF) { // read until end of input
        if( /* your code */ ) // if letter, change case
            /* your code to do the case change */
        putchar(c);
    }
    return 0;
}
