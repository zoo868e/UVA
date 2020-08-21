#include <stdio.h>
#include <string.h>

int main(void){
	int k,n,digit,number,temp;
	double dp[110][15];
	while(scanf("%d %d", &k, &n) != EOF){
		memset(dp, 0, sizeof(dp));
		for(number = 0;number <= k;number++)dp[1][number] = 1;
		for(digit = 2;digit <= n;digit++){
			for(number = 0; number <= k; number++){
				if(number == 0)dp[digit][number] = dp[digit - 1][0] + dp[digit - 1][1];
				else if(number == k)dp[digit][number] = dp[digit - 1][k-1] + dp[digit - 1][k];
				else for(temp = number - 1; temp <= number + 1; temp++)dp[digit][number] += dp[digit - 1][temp];
}
}
		double ans = 0, all = 1;
		for(temp = 0;temp <= k;temp++)ans += dp[n][temp];
		ans = ans * 100;
		for(temp = 1;temp <= n;temp++)all *= (k+1);
		printf("%.5f\n",ans/all);
}
	return 0;
}
