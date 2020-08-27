#include<stdio.h>
#include <string.h>
#define INT_MAX 2147483647

long long int cost();

long long int n[36];

int main(){
	long long int x,fp,fwp,ffp,min[36],mcost,test,temp;
	scanf("%lld",&x);
	for(fp = 1;fp <= x;fp++){
		fwp = 0;
		memset(n,0,sizeof(n));
		while(fwp < 36){
			scanf("%lld",&n[fwp]);
			fwp++;
		}
		printf("Case %lld:\n",fp);
		scanf("%lld",&fwp);
		while(fwp > 0){
			scanf("%lld",&test);
			printf("Cheapest base(s) for number %lld:",test);
			mcost = INT_MAX;
			memset(min,INT_MAX,sizeof(min));
			for(ffp = 1;ffp <36;ffp++){
				temp = cost(test,ffp+1);
				min[ffp] = temp;
				mcost = temp < mcost ? temp:mcost;
			}
			for(ffp = 0;ffp < 36;ffp++){
				if(min[ffp] == mcost)printf(" %lld",ffp+1);
			}
			printf("\n");
			fwp--;
		}
		if(fp == x)break;
		printf("\n");
	}
	return 0;
}

long long int cost(long long int x,long long int p)
{
	long long int sum = 0;
	while(x > 0){
		sum += n[x % p];
		x = x / p;
	}
	return sum;
}
