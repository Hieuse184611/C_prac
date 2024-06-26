#include <stdio.h>
// nhap 3 so a b c theo  format sau 
//a, b@c

int main(){
	int a,b,c;
	printf("Nhap a,b@c: ");
	scanf("%d,%d@%d",&a,&b,&c);
	printf("a=%d,b=%d,c=%d\n",a,b,c);
	return 0;
	 
}

