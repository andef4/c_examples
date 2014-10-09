#include <stdio.h>


struct struct1 {
	char a;
	int b;
	double c;
};

typedef struct struct1 struct1_t;


int main(void) {
	struct struct1 my_struct1;
	//struct1_t my_struct2;

	// the following two lines do not compile:
	//  struct1 my_struct3;
	//  struct struct1_t struct4;


	printf("Expected size: 2 + 4 + 8 = 14, real size: %ld\n", sizeof(my_struct1));

	//struct1_t mystruct[5];
}


