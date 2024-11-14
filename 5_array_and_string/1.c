#include <stdio.h>
#include <string.h>
int main(){
	int array[4] = {1,2,3,4};
	char string1[] = {'a','b','c','d','e','\0'};
	char *string2 = "abcdefghi";
	char string3[] = "abcde";
	printf("string1:%s,size1:%ld,strlen1:%ld\r\n",string1,sizeof(string1),strlen(string1));
	printf("string2:%s,size2:%ld,strlen2:%ld\r\n",string2,sizeof(string2),strlen(string2));
	printf("string3:%s,size3:%ld,strlen3:%ld\r\n",string3,sizeof(string3),strlen(string3));
	printf("array:");
	for(int i = 0;i<4;i++){
	if(i == 3){
	printf("%d\n",array[i]);}
	else{
	printf("%d",array[i]);}
	}
	
	return 0;
}
