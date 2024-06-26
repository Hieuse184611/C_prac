#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Nhap 2 so thuc a,b (b>a)
// in ra man hinh 5 so ngau nhien trong [a,b]

int main (){
	 //Step1 nhap 2 so a,b 
	 
	 double a,b;
	 printf("Enter a,b:");scanf("%lf%ld",&a,&b);
	 
	 //Step2 in ra man hinh 5 so ngau nhien
	 srand(time(0)); // khoi tao software random
	 int i;
	 for(i=0;i<5;i++){
	 	printf("%lf,",a+(double)rand()/RAND_MAX*(b-a));
	 	
	 }
	 return 0;
}
