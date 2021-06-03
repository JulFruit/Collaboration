#include <stdio.h>

int main(){

char* s = "absgyc";
int l = len(s);

printf("%d\n",l);


char* s2 = "azertyuiop";
printf("nb e:%d\n",nbe(s2));
char* s3 = malloc(10* sizeof(char));
copi(s2,s3);

while(*s3){
	printf("%c",*s3);
	++s3;


}
printf("\n");

}


int len(char* s){
	int len=0;
	for(int i=0;*(s+i);i++){
		len ++;
	}
	return len;
}

void copi(char* s1,char* s2){
	char* s = s2;
	while(*s1){
		*s2 = *s1;
		++s1;
		++s2;
	}
	s2 = s;

}

int nbe(char* s){
	int n =0;
	char* s2=s;
	while(*s2){
		if(*s2 == 'e'){
			n++;
		}
		s2++;
	}


	return n;
}
