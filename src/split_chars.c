#include <stdio.h>
#include <stdlib.h>

#define MAX_STRING_LENGTH 20

int main(void) {
	printf("Enter a string: ");
	char* str = malloc(MAX_STRING_LENGTH);
	fgets(str, MAX_STRING_LENGTH, stdin);
	printf("%s\n", str);

	for(int i = 0; str[i] != '\0'; i++) {
		if (str[i] == '\t' || str[i] == ' ') {
			putchar('\n');
		} else {
			putchar(str[i]);
		}  
	}
	putchar('\n');
	return 0;
}
