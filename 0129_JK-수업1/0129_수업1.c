#include <stdio.h>

// �Լ��� ���� / ����
// [���ϵ�����Ÿ��] [�Լ���] ( [���ڵ�...] ) {// �Լ�������}
//2. �Լ��� "�Լ�����" �� ������ �� �ִ�.
// [���ϵ�����Ÿ��] [�Լ���] ( [���ڵ�...] ); // <-- �Լ�����
//----------------------
/*
int a = 10; // ��������

int add(int a, int b);

void add_all() {
	a++;
}

void printA() {
	add_all();
	add_all();
	printf("printA = %d\n", a);

}
/*
void all_local() {
	int a = 20;
	printf("all_local = %d\n", ++a);
}
*/
int add_plus(int x, int y); // �Լ����� ����
void print_add_plus(int x, int y); // �Լ�����


int main_01(void) {
	/*
	add(0, 10);  // �Լ�ȣ��
	add_all(); // a++;
	add_all();
	add_all();
	add_all();
	add_all();

	printf("%d\n");
	printA(); // 17

	all_local(); // 22
	all_local(); // 20
	all_local(); // 20
	all_local(); // 20
	all_local(); //20
	*/
	/*
	int result = add_plus(10, 11);
	result = print_add_plus(10, 11);
	*/
	

	return 0;
}
/*
int add(int a, int b) { // �Լ�����
	
	return 0;
}
*/



int add_plus(int x, int y) {
	return x + y;
}
void print_add_plus(int x, int y) {
	printf("%d + %d = %d\n", x, y, add_plus(x, y));
}