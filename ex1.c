#include <limits.h>
#include <float.h>
#include <stdio.h>

int main(int argc, char **argv) {
	int ivar = INT_MAX;
	float fvar = FLT_MAX;
	double dvar = DBL_MAX;

	printf("max int: %d\nmax float: %f\nmax double: %f\n", ivar, fvar, dvar);
	printf("size of int: %ld\nsize of float: %ld\nsize of double: %ld\n", sizeof ivar, sizeof fvar, sizeof dvar);
	return 0;
}
