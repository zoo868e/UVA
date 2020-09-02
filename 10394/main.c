#include <stdio.h>
#include <string.h>
#define max 20000000

int prime[max];
int twin[4500];

void generate();

int main(){
	generate();
	int n;
	while(scanf("%d",&n)!=EOF)
		printf("(%d, %d)\n",twin[n-1]-2,twin[n-1]);

	return 0;
}

void generate()
{
	memset(prime,1,sizeof(prime));
	memset(twin,0,sizeof(twin));
	prime[0] = 0;
	prime[1] = 0;
	int fp,i,temp = 0;
	for(i = 2;i < max;i++){
		if(prime[i]){
			for(fp = i+i;fp < max;fp += i)prime[fp] = 0;
		}
		if(prime[i] && prime[i-2]){
			twin[temp] = i;
			temp++;
		}
}
}
