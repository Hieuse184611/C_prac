#include <stdio.h>

double average(int a, int b)
{
	 printf("addr a_average : %u\n",&a) ;
	 printf("addr b_average : %u\n",&b) ;
    return (a+b)/2;
 } 
	int main(){
		int a,b; printf("Enter a,b:");scanf("%d%d,a,b");
	printf("addr a_average : %u\n",&a) ;
	printf("addr b_average : %u\n",&b) ;
	printf("average(%d,%d)=%lf\n",a,b,average(a,b));
	return 0;
		 
	} 
	
