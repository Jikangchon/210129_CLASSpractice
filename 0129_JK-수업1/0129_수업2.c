// char_arr_string.c
#include <stdio.h>

// ���� �迭 ����

int strStringLenth(char name[]);

int main(void) {

	
	char name[1000] = "HELLO";
	int size = strStringLength(name);
	

	
	/*
	int a[10];
	int size_of_a = sizeof(a) / sizeof(int);
	printf("%d\n\n", size_of_a);
	*/

	printf("���ڿ��� ���̴� %d �Դϴ�.\n", size);

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
	int length = 1; // ���ڿ��� ����
	// '\0' ���ڿ��� ���� �׻� Null (\0)
	for (int i = 0; i < max; i++) {
		if (name[i] == '\0') break;
		length++;
	}

	double d[100];
	printf("�޸�ũ��%d, double�� �޸�ũ�� %d, �迭 d[]�� ����",
		sizeof(d), //-- 800 bytes
		sizeof(double), //-- 8bytes
		sizeof(d) / sizeof(double) //-- 800 / 8 = �迭�� ����
		);
	
	return length;
	
}