//LTC 11. Ep kieu du lieu
#include<stdio.h>
int main ()
{
	int a, b;
	printf("Nhap vao a = ");
	scanf("%d", &a);
	printf("\nNhap vao b = ");
	scanf("%d", &b);
	
	float ketqua = (float)a/b;
	int ketqua2 = (int)ketqua;
	
	printf("%d/%d=%.2f", a, b, ketqua);
	printf("\n ketqua2= %d", ketqua2);
}

