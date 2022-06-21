//LTC 08. Toan tu dieu kien va vi du ktra so CHAN - LE
 #include "stdio.h"
#include "stdio.h"
int main(){
	int a;
	printf("Nhap gia tri a = ");
	scanf("%d", &a);
	
	printf("%d la so %s", a, (a%2==0)?"CHAN":"LE");

}
