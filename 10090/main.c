#include <stdio.h>
#include <math.h>

typedef long long LL;

void exgcd(LL a, LL b, LL *r, LL *x, LL *y) {
    if (!b) {
        *r = a;
        *x = 1;
        *y = 0;
    }else {
        exgcd(b, a%b, r, y, x);
        *y -= (a/b)*(*x);
    }
}

int main(){
	LL n,c1,n1,c2,n2,g,x,y;
	while(~scanf("%lld",&n) && n){
		scanf("%lld %lld %lld %lld",&c1,&n1,&c2,&n2);

		exgcd(n1,n2,&g,&x,&y);
		LL m1 = ceil(-1.0*n*x/n2);
		LL m2 = floor(1.0*n*y/n1);
		if(n%g || m1 > m2){
			printf("failed\n");
		}else if((c1 * n2) >= (c2 * n1)){
			x = x * n / g + n2 / g * m1;
			y = y * n / g - n1 / g * m1;
			printf("%lld %lld\n",x,y);
		}else {
			x = x * n / g + n2 / g * m2;
			y = y * n / g - n1 / g * m2;
			printf("%lld %lld\n",x,y);
		}
	}
	return 0;
}

