#include <stdio.h>

int main(){
	int array[8]={1,2,3,4,5,6,7,8};
	int *p ;
	p= array;
	printf("p:");
	for(int i = 0; i < 8; i ++){
	if(i == 7){
	printf("%d\n",*(p+i));
	}
	else{
	printf("%d",*(p+i));
	}
	}
	printf("array:");
	for(int i = 0; i < 8; i ++){
	if(i == 7){
	printf("%d\n",array[i]);
	}
	else{
	printf("%d",array[i]);
	}
	}
	printf("array:");
	for(int i = 0; i < 8; i ++){
	if(i == 7){
	printf("%d\n",*(array+i));
	}
	else{
	printf("%d",*(array+i));
	}
	}
}
