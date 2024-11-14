#include <stdio.h>


int adder(int a, int b,int cin){
	int f = a + b + cin;

	return f;	
}


int main(){
	int (*p)(int a,int b , int cin);
	p = adder;

	printf("adder:%d\n",adder(1,1,0));
	printf("p:%d\n",p(1,0,0));
	return 0;
}
