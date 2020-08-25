#include <stdio.h>

void printPyramid(int n) {
	for (int i=0; i<n; i++) {
		for (int j=0; j<n-i-1; j += 1) {
			putchar(' ');
		}

		for (int j=0; j<1+i*2; j += 1) {
			putchar('*');
		}
		putchar('\n');
	}
}

int main(int argc, char **argv) {
	if (argc != 2) {
		// command line argument should be present
		return -1;
	}

	int n;
	sscanf(argv[1], "%d", &n);

	printPyramid(n);
	return 0;
}
