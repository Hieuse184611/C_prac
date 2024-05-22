#include <stdio.h>
// Enter n and calculate factorial of n
// s = 1/1! + 2/2! + 3/3! + ... + n/n!

float factorial(int n){
	int i;
	long f = 1;
	for (i = 2; i <= n; i++){
		f*=i;
	}
	return f;
}

float sumFactorial(int n){
	int i;
	float sum = 0;
	for (i = 1; i <= n; i++){
		sum += 1/factorial(i);
	}
	return sum;
}

int main(){
	int n;
	printf("Enter n: ");
	scanf("%d", &n);
	printf("Sum Factorial = %f\n", sumFactorial(n));
	return 0;
}
