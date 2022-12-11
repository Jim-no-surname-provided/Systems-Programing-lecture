#if defined(_STDC_LIB_EXT1_) || defined(_MSC_VER)
    #define __STDC_WANT_LIB_EXT1_ 1
    #define SCANF(x) (scanf_s((x)))
#else
    #define SCANF(a, b) (scanf((a), (b)))
#endif

#include <stdio.h>
#include <assert.h>

int main() {
	double numerator = 0.0, denominator = 0.0;
	printf("--- Quotient of two numbers ---\n\nEnter the nominator: ");
	if (SCANF("%lf", &numerator) < 1) {
		printf("invalid input\n"); return 1;
	}
	printf("denominator: ");
	if (SCANF("%lf", &denominator) < 1) {
		printf("invalid input\n"); return 1;
	}

	assert(denominator != 0.);

	printf("quotient is %f\n", numerator / denominator);
    system("pause");
	return 0;
}


