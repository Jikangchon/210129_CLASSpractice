#include <stdio.h>

int main04(void) {

	char name[1000] = "HELLO";
	int size = strStringLength(name);

	printf("문자열의 배열은 %d입니다. \n", size);


	return 0;
}