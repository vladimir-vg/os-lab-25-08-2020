#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define STR_LENGTH 100

int main(int argc, char **argv) {
	char str[STR_LENGTH];
	printf("Please enter the string: ");
	fgets(str, sizeof(str), stdin);
	
	int length = strlen(str);
	for (int i = length-1; i >= 0; i -= 1) {
		putchar(str[i]);
	}
	putchar('\n');
	return 0;
}
