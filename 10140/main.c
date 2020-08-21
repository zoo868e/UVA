#include<stdio.h>
#include<limits.h>
#include<string.h>
#include<math.h>

int isPrime(int x,int prime[]);

int main(){
	long int L,U,t,x,i,max,min;
	int temp = 0,x1,x2,pmax,pmin,gap,flag;
/*find all prime number*/
	int prime[15000],ans[10000],pans;
	memset(prime,0,sizeof(prime));
	for(x = 2;x <= 46340;x++){
		if(isPrime(x,prime)){
			prime[temp] = x;
			temp++;
}
	x = 0;
	while(prime[x]>0)x++;
/*start to scan input*/
}
	while((scanf("%ld %ld",&L,&U))!=EOF){
		max = -1;
		min = INT_MAX;
		pmax = -1;
		pmin = -1;
		pans = 0;
		memset(ans,0,10000);
/*find all prime number*/
		for(t = L;t<=U;t++){
			flag = 1;
			for(x1 = 0;x1 < x;x1++){
				if((t % prime[x1]) == 0){
					flag = 0;
					continue;
}
}
			if(flag == 1){
				ans[pans] = t;
				pans++;
}
}
/*find min and max*/
		for(i = 0;i < pans-1;i++){
			gap = ans[i+1]-ans[i];
			if(gap > max){
				pmax = i;
				max = gap;
}
			if(gap < min){
				pmin = i;
				min = gap;
}
}
		printf("min max already\n");
/*print min and max*/
		if(pmax == -1)printf("There are no adjacent primes.\n");
		else printf("%d,%d are closest, %d,%d are most distant.\n",ans[pmin],ans[pmin+1],ans[pmax],ans[pmax+1]);
}
	return 0;
}

int isPrime(int x,int prime[])
{
	int t = 0,i;
	while(prime[t]!=0)t++;
	for(i = 0;i < t;i++){
		if(((x % prime[i]) == 0) && (x > prime[i]))return 0;
}
	return 1;
}
