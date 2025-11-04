#include <stdio.h>

int main(void) {
	unsigned int x = 0x12345678;
	long lg = 2147483648;
	double xl = 123456789123.456789;

	printf("Uint: %d\n", x);
	printf("Uint -> short: %d\n", (short)x);
	printf("Uint -> char: %d\n", (char)x);

	printf("Uint: %d\n", lg);
	printf("Uint -> int: %d\n", (int)lg);
	printf("Uint -> char: %d\n", (char)lg);

	printf("Uint: %lf\n", xl);
	printf("Uint -> long: %d\n", (long)xl);
	printf("Uint -> short: %d\n", (short)xl);

	return 0;
}