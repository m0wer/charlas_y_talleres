#include <stdio.h>

int main (int argc, char *argv[]) {
	if (argc>1) {
		printf("Factorial de %s: %i\n",argv[1],factorial(atoi(argv[1])));
	}
	return -1;
}

int
factorial (int x)
{
	if (x < 1)
		return 1;
	else
		return (x * factorial (x - 1));
}
