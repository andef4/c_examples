#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char array[8];
	for (int i = 0; i < 8; i++) {
		array[i] = (char)((int)'0') + i;
	}
	
	int* int_ptr = (int*)array;
	int_ptr++;
	char *char_ptr = (char*)int_ptr;
	printf("%c\n", *char_ptr);
	printf("%c\n", array[0]);
	return 0;
}

