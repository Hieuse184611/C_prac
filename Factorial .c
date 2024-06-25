//Nhap n va tinh factorial(n)
//S=1/1!+1/2!+1/3!+...+1/n!
//voi n nhap tu ban phim 
//factorial (int n): tinh giai thua 
//main goi ham factorial 
// tinh mau sao 

//Step1 chon kieu tra ve 
//Step2 chon ten ham va cac bien 
//trong ham; 
//Step3 viet than ham 
#include <stdio.h>  
 long factorial(int n){
 	//n!=1*2*3*4*..*n
 	int i; long f = 1; 
 	for (i=2;i<=n;i++)
 { f*=i;
 }
   return f;
}

  
  int main() {
  	
  	//Step1 Nhap n tu ban phim 
  	//Step2 In ra factorial(n)
  	
  	int n;
  	printf("Enter n:");scanf("%d",&n);
  	printf("factorial=%lf\n",factorial(n));
  	   
		 return 0;
  	
  }
