#include<stdio.h>
int main(){
	int sum = 0 ;
	int arr[] = {2,3,4,5,6};
	int cumulative_sum[5] ;
	for(int i = 0 ; i<=5;i++)
{
	sum += arr[i];
	cumulative_sum[i]=sum ;
	printf("Cumulative sum: ");
    for (int i = 0; i < 5; i++) {
        printf("%d", cumulativeSum[i]);
        if (i < 4) {
            printf(", ");
        }
    }
    return 0;
	}	
}



