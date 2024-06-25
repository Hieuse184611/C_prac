#include <stdio.h>
//Tinh tong s = 1+3+5+...+..n ( n la so le va nhap tu ban phim)
//Dung vong lap for va coutinue

 int main (){
 	//step1 Nhap n tu ban phim 
 	
	 int n;
 	printf("Enter n: ");
 	scanf("%d",&n);
 	
 	//step2 Dung vong lap tinh tong 
 	
 	int i, s= 0;
 	for(i=1;i<=n;i++){
 		if(i%2==0){
 			continue;
		 }
		 s+=i;
		
	 }
	 printf("s=%d\n",s);  //s=1+3+5+7=15
	 
	 return 0;
 	
 }
