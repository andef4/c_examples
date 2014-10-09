#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void) {
	char *buffer = malloc(10*sizeof(char));
	char *buffer2 = malloc(10*sizeof(char));
	strncpy(buffer2, "123456789", 9);
	scanf("%9s", buffer);
	printf("%s\n", buffer);
	printf("%s\n", buffer2);
	free(buffer);
	free(buffer2);
	return 0;
}

