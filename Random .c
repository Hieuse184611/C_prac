//ten random

#include <stdio.h>
#include <stdlib.h>//dung cho ham rand
#include <time.h>

int main(){
	int i;
	for(i=0;i<5;i++){
		printf("%d,",rand());
	}
	srand(time(0));
	
	//seed: 
	//time (0) nghia la tra ve gia tri cua thoi gian hien tai 
	//khoi toa sftware random voi tri mam 
	//la thoi gian hien tai
	
		for(i=0;i<5;i++){
		printf("%d,",rand());
	}
	
	return 0;
}
