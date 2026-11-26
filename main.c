#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	// 2.1. Cau trúc lenh if, if..esle, switch…case 
	// Câu 1 ------------------------------------------------------------------------------
	// Dùng cú pháp l?nh ?: d? tìm s? l?n nh?t, nh? nh?t c?a 2 s? nguyên
	int a;
	int b;
	
	printf("a : ");
	scanf("%d", &a);
	
	printf("b : ");
	scanf("%d", &b);
	
	int processMin = (a < b) ? a : b;	
	int processMax = (a > b) ? a : b;	
	
		
	printf("Min : %d \n", processMin);
	printf("Max : %d \n", processMax);
	return 0;
}
