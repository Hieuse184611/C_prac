//average (int a, int b, int c)
//sao cho ham nay tinh gia tri 
//trung binh cua 3 so tren 
//viet ham main de nhap 3 so
//va goi ham average 
//average (int a,int b,int c)

#include <stdio.h>
double average(int a,int b,int c){
	//to do 
	return (a+b+c)/3.0; //day la kieu tinh theo so nguyen TBC=5
	                  //neu them (double) vao trc (a+b+c) 
					  //thi se tinh theo so thuc TBC=5.333
	                  //hoac them dau . vao 
					  //-> tinh theo so thuc : (a+b+c)/3. 
	                  
	
}
int main (){
	
	//Step 1 Input a b c
	int a,b,c;
	
	//Step 2 goi ham average () (a+b+c)/3
	
	printf("Enter a: ");scanf("%d",&a);
	printf("Enter b: ");scanf("%d",&b);
	printf("Enter c: ");scanf("%d",&c);
	//hoac printf "enter a,b,c" va scanf(%d%d%d,&a,&b,&c)
	
	printf("average=%.4f\n",average(a,b,c));
	
	//%.4f vi output 5.3333 lay 4 so sau dau. 
	
		return 0;//5 6 5 
  	
}
