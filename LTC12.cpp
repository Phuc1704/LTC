//LTC 12. Thu vien math.h v� cac ham toan hoc can bac hai, ham mu, ham lam tron
#include<stdio.h>
#include<math.h>
int main () {
	int a = 5;
	int b = 2;
	float kq = (float)a/b;
	
	printf("\n floor(a/b)=%f", floor(kq));
	printf("\n ceil(a/b)=%f", ceil(kq));
	printf("\n sqrt(9)=%f", sqrt(9));
	printf("\n 5^2 = %d", pow(5,2));
	printf("\n |5|= %d", abs(5));
	printf("\n |5.2|=%f", fabs(5.2));
}
