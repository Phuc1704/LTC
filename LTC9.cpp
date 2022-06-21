//LTC 09. Bai tap tim so nho nhat va so lon nhat giua hai so a va b
#include<stdio.h>
int main () {
	//Khai bao bien
	int a, b, min, max;
	
	//Nhap du lieu
	printf("Nhap vao a = ");
	scanf("%d", &a);
	printf("\nNhap vao b = ");
	scanf("%d", &b);
	
	//Xu ly
	min = (a<b)?a:b;
	max = (a>b)?a:b;
	
	//Xuat du lieu
	printf("\nMAX = %d", max);
	printf("\nMIN = %d", min);
	
}
