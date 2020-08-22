#include <stdio.h>
#include <string.h>

#define EPS 1e-8

int isprime(int x);


int main(){
    int temp,ft,num[10010];
    int ans,count,a,b;
    memset(num,0,sizeof(num));
    for(ft = 0;ft <= 10001;ft++)
        num[ft] = isprime(ft*ft+ft+41);
    while(scanf("%d %d",&a,&b)!=EOF){
        count = 0;
        for(ft = a;ft <= b;ft++)
            count+=num[ft];
        printf("%.2f\n",count*1.0/(b-a+1)*100+EPS);
    }
    return 0;
}

int isprime(int x){
	int i;
	for(i = 2;i*i <= x;i++){
        if(x % i);
        else return 0;
}
	return 1;
}

