#include <stdio.h>
#include <math.h>
 
typedef long long LL;
 
void exgcd(LL a, LL b, LL &r, LL &x, LL &y) {
    if (!b) {
        r = a;
        x = 1;
        y = 0;
    }else {
        exgcd(b, a%b, r, y, x);
        y -= (a/b)*x;
    }
}
 
int main()
{
	LL n, c1, n1, c2, n2, r, x, y;
	while (~scanf("%lld",&n) && n) {
		scanf("%lld%lld%lld%lld", &c1, &n1, &c2, &n2);
		
		exgcd(n1, n2, r, x, y);
		LL lower = ceil(-1.0 * n * x / n2); 
		LL upper = floor(1.0 * n * y / n1);
			
		if (n % r || lower > upper) {
			puts("failed");
		}else if (c1 * n2 >= c2 * n1) {
			x = x * n / r + n2 / r * lower;
            y = y * n / r - n1 / r * lower;
            printf("%lld %lld\n", x, y);
		}else {
			x = x * n / r + n2 / r * upper;
            y = y * n / r - n1 / r * upper;
            printf("%lld %lld\n", x, y);
		}
	}
	return 0;
}
