//LTC 25. Tinh giai thua cua so nguyen n
#include<stdio.h>
int main () {
	int n, giaithua=1;
	do {
		printf("\nNhap vao n (n>=0)");
		scanf("%d", &n);
	}while (n<0);
	for(int i=1; i<=n; i++) {
		giaithua=giaithua*i;
	}
	printf("Giai thua = %d", giaithua);
}
