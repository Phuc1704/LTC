//LTC 26. Lenh goto, lenh continue
#include<stdio.h>
int main() {
	int n;
	Nhap:
		printf("\nNhap n = ");
		scanf("%d", &n);
		if(n<=0) goto Nhap;
		
		printf("\nDay so le:");
		for(int i=1; i<=n; i++)
		{
			if(i%2==0) continue;
			printf("\n%d", i);
		}
}
