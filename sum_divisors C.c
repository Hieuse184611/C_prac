
#include <stdio.h>

int sumDivisors(int a){
    
    int i, s=0;
    for(i=1;i<=a;i++){
    if(a%i==0){
    s+=i;
    } 
}
 return s;
 }
 int main(){
 int n; scanf("%d",&n);
 int sum = sumDivisors(n);
 printf("sum=%d\n",sum);
 return 0;
 }

  
