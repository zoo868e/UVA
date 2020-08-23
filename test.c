#include<stdio.h>
#include<string.h>

int main(){
    int a[10];
    memset(a,1,sizeof(a));
    printf("%ld\n",strlen(a));
	return 0;
}
