#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	// the following lines do not compile:
	//  const char* const_char = malloc(sizeof(char) * 12);
	//  strcpy(const_char, "Hello World");
	//  const_char[0] = 'W';
	//  printf("%s\n", const_char);

	char* const char_const = malloc(sizeof(char) * 12);
	strcpy(char_const, "Hello World");
	char_const[0] = 'W';
	printf("%s\n", char_const);

	free(char_const);
	// the following line does not compile:
	// char_const = malloc(sizeof(char) * 12);
	return 0;
}
