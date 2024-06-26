#include <stdio.h>
#include <time.h>
int main (){
	int i,s=0;
	time_t t1 = time(0); 
	//thoi diem trc khi vao vong for
	
	for(i=0;i<1000000000;i++)s++;
	time_t t2 = time (0); 
	//thoi diem sau khi thoat khoi vong for
		printf("Thoi gian: %lf \n",difftime(t2,t1));
	
	//Tinh thoi gian xu ly so thuc 
	double r = 0;
	
	return 0;
	
	
}
