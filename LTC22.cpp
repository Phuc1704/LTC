//LTC 25. Vong lap while 
#include<stdio.h>
int main () {
	int n, tong=0, i=0;
	printf("Nhap vao n= ");
	scanf("%d", &n);
	
	while (i<=n) {
		tong=tong+i;
		i++;
	}
	printf("\nTong = %d", tong);
}
