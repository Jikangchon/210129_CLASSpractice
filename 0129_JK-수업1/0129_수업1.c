#include <stdio.h>

// 함수의 구조 / 문법
// [리턴데이터타입] [함수명] ( [인자들...] ) {// 함수구현부}
//2. 함수는 "함수원형" 도 존재할 수 있다.
// [리턴데이터타입] [함수명] ( [인자들...] ); // <-- 함수원형
//----------------------
/*
int a = 10; // 전역변수

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
int add_plus(int x, int y); // 함수원형 선언
void print_add_plus(int x, int y); // 함수원형


int main_01(void) {
	/*
	add(0, 10);  // 함수호출
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
int add(int a, int b) { // 함수정의
	
	return 0;
}
*/



int add_plus(int x, int y) {
	return x + y;
}
void print_add_plus(int x, int y) {
	printf("%d + %d = %d\n", x, y, add_plus(x, y));
}