//selection_ sort 

#include <stdio.h >
 
 void selectionSort(int a[], int n){
 	int i,j;
 	int min_index;
 	for(i=0;i<n-1;i++){
 		min_index = i;
 		for(j=i+1;j<n;j++){
		 
 		if(a[j]<a[min_index]){
 			min_index = j;
 			
		 }
	 }
	 if(min_index != i ){
	 	//swap 
	 	int temp = a[i];
	 	a[i]=a[min_index];
	 	a[min_index]=temp;
	 }
	 }
}


 int main(){
 	int a[] = {-1,3,6,-3,7,8,10,20,0,4,5};
 	selectionSort(a,11);
 
 	 int i;
 	 for (i=0;i<11;i++)
 	 printf("%d,",a[i]);
	 return 0;
 }
