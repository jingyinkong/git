#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void coke(char* *a){
	char* x = "caaaaaaaaaaaaaaaaaaaake";
	*a = (char *)malloc(strlen(x));
	strcpy(*a,x);
	printf("%s\n",*a);
	return;
}
int main() {
	char *a = NULL;
	int b = 6;
	coke(&a);
	printf("%s\n",a);
	printf("len=%d\n", strlen(a));
	printf("b=%d\n", b);
	return 0;
}

