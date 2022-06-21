//LTC 21. Bang ma ASCII va bang chu cai Alphabet
#include "stdio.h"
int main(){
	char kytu;
	for(kytu=32; kytu<=126; kytu++){
		//printf("%c ", kytu);
		printf("%d - %c\n", kytu, kytu);	
	}
}
