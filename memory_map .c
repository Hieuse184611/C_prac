#include <stdio.h>
int main () {
	int a =256;
	int* pA = &a ;
	char* pAc = pA;
	*pAc = 0;
	printf("a=%d\n",a); //256
	
	return 0;
}

