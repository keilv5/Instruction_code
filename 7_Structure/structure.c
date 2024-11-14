#include <stdio.h>

int main(){

struct book {
	char title[100]; 
	char author[100]; 
	float value;
}; 

struct book b1 = {
	"huozhe",
	"yuhua",
	999
};
printf("b1:%s\n",b1.title);
struct book1 {
	char title[100]; 
	char author[100]; 
	float value;
}b2 = {"huozhe","yuhua",999}; 
printf("b2:%s\n",b2.title);

struct book *pstr = &b1;
printf("pstr1:%s\n",pstr -> title);

return 0;
}
