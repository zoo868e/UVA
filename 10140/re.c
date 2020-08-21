#include<stdio.h>
#include<limits.h>
#include<string.h>
#include<math.h>

int isprime(int x);
void generate();

int prime[15000];

int main(){
	int min,pmin,max,pmax;
	unsigned int L,U;
	generate();
	int cprime = 0,ft;
	while(prime[cprime++]!=0);
	while(scanf("%d %d",&L,&U)!=EOF){
		min = INT_MAX;
		max = -1;
		pmin = -1;
		pmax = -1; 
		if(U<2)U = 2;
		if(L<2)L = 2;
/*step 2-1*/
		int ans[U-L],cans = 0;
		memset(ans,0,sizeof(ans));
		for(ft = L;ft <= U;ft++){
			if(isprime(ft)){
				ans[cans] = ft;
				cans++;
}
}
/*step 2-2*/
		int gap;
		for(ft = 0;(ft < cans-1) && (ans[ft]!=0);ft++){
			gap = ans[ft + 1] - ans[ft];
			if(gap > max){
				pmax = ft;
				max = gap;
}
			if(gap < min){
				pmin = ft;
				min = gap;
}
}
/*step 2-3*/
		if(max == -1)printf("There are no adjacent primes.\n");
		else printf("%d,%d are closest, %d,%d are most distant.\n",ans[pmin],ans[pmin+1],ans[pmax],ans[pmax+1]);
}
	return 0;
}

void generate()
{
	memset(prime,0,sizeof(prime));
	int temp = 0,i;
	for(i = 2;i < 46340;i++){
		if(isprime(i)){
			prime[temp] = i;
			temp++;
}
}
}

int isprime(int x){
	int t = 0,i;
	while(prime[t]!=0)t++;
	for(i = 0;i < t;i++){
		if((x > prime[i]) && ((x % prime[i]) == 0))return 0;
}
	return 1;
}
