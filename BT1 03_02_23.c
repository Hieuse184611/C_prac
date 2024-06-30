//viet ham UCLN (int a, int b)
//de tinh uoc chung lon nhat 
// a va b 
// viet ham boi chung nho nhat ( int a, int b)
// de tinh boi chung nho nhat cua 2 so a va b 
//viet ham main de test 2 ham tren 
//6,4 ----> UCLN(6,4)=2; BCNN(6,4)=12 
 

#include <stdio.h>

int UCLN(int a,int b){
	int min = a>b?b:a;
	int u ;
	int i;
	for(i=1; i<=min;i++){
		if(a%i==0 && b%i==0){
			u=i;	
	} 
}
	return u; 
} 

int BCNN(int a,int b){
	return a*b/UCLN (a,b);
}

 int main(){
 	//step1 Nhap 2 so a,b tu ban phim 
 	
 	int a,b;
 	printf("Enter a,b: \n");scanf("%d%d",&a,&b);
 	
 	//step2 IN ra ket qua UCLN va BCNN cua a va b 
 	
 	printf("UCLN(%d%d)=%d\n", a,b,UCLN(a,b)); //UCLN la 2
 	printf("BCNN(%d%d)=%d\n",a,b,BCNN(a,b));  //BCNN la 12 
 	return 0;
 }
