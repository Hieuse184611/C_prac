//NHap 2 so a,b
//viet ham so  sort(int * pA,int* pB)
//sao cho sau khi goi sort (&a,&b)
//a la so lon hon trong ham main 
//vd a=3,b=4; sort(&a,&b)
//a=4,b=3

#include <stdio.h>
 
 void swap (int* a, int*b ){
 	
		  	if(a>b){
		  		int tam =*a; //*a = a_main; tam = a_main
	      *a=*b; //a_main=b_main
		  *b=tam ;//b_maint=tam 
			  }
 	 
 } 
 int main (){
 	int a,b;
 
 	
 	printf("Enter a,b:\n");scanf("%d%d",&a,&b);
 	swap(&a,&b);
 	printf("After swapping:a=%d,b=%d\n",a,b);
 	
 	return 0;
 }
