//LTC 29. Xuat tat ca cac so chinh phuong nho hon bang n
#include<stdio.h>
#include<math.h>
int kiemtraSCP(int x){
	int kc=(int)sqrt(x);
	if(pow(kc, 2)==x) return 1;
	else return 0;
}
int main(){
	int n;
	do{
		printf("Nhap n=");
		scanf("%d", &n);
	}while (n<1);
	for(int i=2; i<=n; i++){
		//int kt=kiemtraSCP(i);
		if(kiemtraSCP(i)){
			printf("%d ", i);
		}
	}
}
