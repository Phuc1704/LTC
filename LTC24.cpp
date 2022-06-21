//LTC 24. Vong lap do while 
#include<stdio.h>
int main () {
	int n;
	do {
		printf("\n-----");
		printf("MENU:");
		printf("\nNhap vao 0 de thoat");
		printf("\nNhap vao so bat ky khac 0 de tiep tuc\n");
		scanf("%d", &n);
	} while(n!=0);
}
