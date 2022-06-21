//LTC 27. Ham
#include<stdio.h>
#include<math.h>

	int kiemtraSNT(int x){
		if(x<=1)
			return 0;
		for(int i=2; i<=x-1; i++) {
			if(x%i==0)
				return 0;
		}
		return 1;
	}

int main(){
	//nhap lieu
	int n;
	printf("Nhap vao n=");
	scanf("%d", &n);
	
	//goi ham
	int kt= kiemtraSNT(n);
	
	//Xu ly va xuat ketqua
	if(kt==1){
		printf("La so nguyen to");
	}else {
		printf("Khong la so nguyen to");
	}
}
