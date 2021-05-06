#include<stdio.h>
#define SIZE 1000000
int main(void) {
	//int a[SIZE] = { 10, };
	int* a = (int*)malloc(sizeof(int) * SIZE);
	printf("%d\n", a[0]);
	return 0;
}