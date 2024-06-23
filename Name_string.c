#include <stdio.h>
#include <string.h>
char* lTrim(char s[]){
	int i=0;
	while(s[i]==' ')i++;
	strcpy(s,s+i);
	return s;
}
char* rTrim(char s[]){
	int i=strlen(s);
	while(s[i]==' ') i--;
	s[i+1]='\0';
	return s;
}



char* trim(char s[]){
	lTrim(rTrim(s));
	char* ptr = strstr(s,"  ");
	while(ptr!=NULL){     // NULL giong  so 0 ngta thuong dung NULL 
		strcpy(ptr,ptr+1);
		ptr = strstr(s,"  ");
	}
	return s;
}
	
	char* nameString(char s[]){
	trim(s);
	int i;
	for(i=0;i<strlen(s);i++){
		if(i==0 || (i>0 && s[i-1]==' '))
		s[i]=toupper(s[i]);
	}
	return s;
}
	



int main(){
	char s[100];printf("Nhap chuoi:");gets(s);
	printf("Chuoi sau khi nameString %s \n",nameString(s));
	return 0;
}

