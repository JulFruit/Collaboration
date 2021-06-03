#include <stdio.h>

int main(){

char* s = "absgyc";
int l = len(s);
printf("%d\n",l);
}


int len(char* s){
	int len=0;
	for(int i=0;*(s+i);i++){
		len ++;
	}
	return len;
}