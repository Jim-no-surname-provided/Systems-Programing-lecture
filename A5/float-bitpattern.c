/**
 * solution to programming assignment on the bit pattern of
 * floating point numbers
 */

#include <stdio.h>
#include <float.h>

void putbits(unsigned int n); // prototype

#define M FLT_MANT_DIG - 1
#define E sizeof(float)*8 - FLT_MANT_DIG

struct bits {
    unsigned int m : M;
    unsigned int e : E;
    unsigned int s : 1;
};

union FloatLong { 
	float x;
	int n;
	struct bits b;
} xnb;

int main() {
    puts("** Sign, exponent and mantissa of a float-variable ***\n");
    printf("Number of bits for the mantissa: %d\nnumber of bits for the exponent: %d\n", M, E);

    if( sizeof(float) > sizeof(int) ) {
        // too large for the bit fields
        puts("type int can't be larger than type float");
        return 1;
    }

    printf("\nEnter a floating point number: ");
    while(scanf("%f", &xnb.x) == 1) {
        printf("bit pattern: ");
        putbits(xnb.n);

        //TODO: print out the sign, exponent and mantissa
		printf("\nsign: %c\n", xnb.b.s ? '-' : '+');
        printf("exponent: %d\n", xnb.b.e - 127);
        printf("mantissa: %f\n", 1 + (float) xnb.b.m / (1<<M));
        printf("\nNext number (enter q to quit): ");
    }
    return 0;
}

void putbits(unsigned int n) { // print the bit pattern of n
    int i;
    for(i = 8*sizeof(n)-1; i >= 0; --i) {
        putchar( ((n>>i) & 1) + '0'); // output the i-th bit
        if ( i % 4 == 0 && i > 0 ) { // put a blank after a block of 4 bits
            putchar(' ');
        }
    }
}
