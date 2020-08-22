#include <stdio.h>
#include <string.h>

int prime[15000];

void generate();
int isprime(int x);

int main(){
	generate();
    int a,b,temp,ft;
    float ans,count;
    while(scanf("%d %d",&a,&b)!=EOF){
        count = 0;
        ans = ((float)b - (float)a + 1.0);
        for(ft = a;ft <= b;ft++){
            temp = ft*ft + ft + 41;
            if(isprime(temp))count++;
        }
        printf("%.2f\n",count*100/ans);
    }
    return 0;
}
void generate()
{
	memset(prime,0,sizeof(prime));
	int temp = 0,i;
	for(i = 2;i < 10000;i++){
		if(isprime(i)){
			prime[temp] = i;
			temp++;
}
}
}

int isprime(int x){
	int i;
	for(i = 0;i < 10000;i++){
		if((x > (prime[i] * prime[i])) && ((x % prime[i]) == 0))return 0;
}
	return 1;
}

