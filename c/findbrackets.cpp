#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool isValid(char * s){
    int length=0,a = 0;
    while(*(s+length))length++;
    char* ptr=(char*)malloc(length/2);
    memset(ptr,0,length/2);
    for(int i=0;i<length;i++)
    {
        if((*(s+i)=='(')||(*(s+i)=='{')||(*(s+i)=='['))
        {
            a++;
            *(ptr+a)=*(s+i);
        }
        else if((*(s+i)==(*(ptr+a)+1))||(*(s+i)==(*(ptr+a)+2)))
        {
            a--;
        }
        else return 0;
    }
    if(a)
        return 0;
    return 1;    
}

int main() {
	bool a;
	char* x = "({})";
	a = isValid(x);
	printf("%d\n",a);
	return 0;
}


