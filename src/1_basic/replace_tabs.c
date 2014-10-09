#include <stdio.h>

int main(int argc, char* argv[]) {
	if (argc != 2) {
		printf("Usage: ./replace_tabs <tab_size>\n");
		return 1;
	}
	int tab_size = 0;
	if (sscanf(argv[1], "%d", &tab_size) != 1 || tab_size < 0) {
		printf("Invalid parameter\n");
		return 1;
	}
	printf("%d\n", tab_size);




	return 0;
}

