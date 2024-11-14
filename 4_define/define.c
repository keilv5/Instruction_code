#include <stdio.h>

int adder(int a,int b,int cin){
	int f = a + b + cin;
	
	return f;
}

int main(){
	printf("add:%d\r\n",adder(1,1,0));

	return 0;
}
