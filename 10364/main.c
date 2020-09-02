#include <stdio.h>
#include <string.h>
#define max 10000

int main(){
	int n,m;
	scanf("%d",&n);
	while(n){
		scanf("%d",&m);
		int p[m],temp;
		memset(p,0,sizeof(p));
		for(temp = 0;temp < m;temp++){
			scanf("%d",&p[temp]);	
		}
		n--;
	}
	return 0;
}
