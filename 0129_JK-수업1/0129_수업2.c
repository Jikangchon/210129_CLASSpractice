// char_arr_string.c
#include <stdio.h>

// 문자 배열 배우기

int strStringLenth(char name[]);

int main(void) {

	
	char name[1000] = "HELLO";
	int size = strStringLength(name);
	

	
	/*
	int a[10];
	int size_of_a = sizeof(a) / sizeof(int);
	printf("%d\n\n", size_of_a);
	*/

	printf("문자열의 길이는 %d 입니다.\n", size);

	return 0;
}

int strStringLength(char name[]) {
	/*
	int max = sizeof(name) / sizeof(char);
	int length = 0;
	for(;name[length] != '\0'; length++) {}
	return length;
	*/
	
	int max = sizeof(name) / sizeof(char);
	int length = 1; // 문자열의 길이
	// '\0' 문자열의 끝은 항상 Null (\0)
	for (int i = 0; i < max; i++) {
		if (name[i] == '\0') break;
		length++;
	}

	double d[100];
	printf("메모리크기%d, double의 메모리크기 %d, 배열 d[]의 길이",
		sizeof(d), //-- 800 bytes
		sizeof(double), //-- 8bytes
		sizeof(d) / sizeof(double) //-- 800 / 8 = 배열의 길이
		);
	
	return length;
	
}