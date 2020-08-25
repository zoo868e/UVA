#include<stdio.h>
#include<string.h>
#include<math.h>

int dp[801][1000];

void gendp();
void carry();
void show();

int main(){
	gendp();
	int n,fp;
	scanf("%d",&n);
	while(n != -1){
		show(n);
		scanf("%d",&n);
}
    return 0;
}

void gendp()
{
	memset(dp,-1,sizeof(dp));
	int fp1,fp2;
	dp[1][0] = 0;
	for(fp1 = 2;fp1 <= 800;fp1++){
		for(fp2 = 0;fp2 < 1000;fp2++){
			if(dp[fp1-1][fp2] >= 0)
				dp[fp1][fp2] = fp1*dp[fp1-1][fp2];
		}
		dp[fp1][0] += pow(-1,fp1);
		for(fp2 = 0;(fp2 < 1000) && (dp[fp1][fp2] >= 0);fp2++){
			carry(fp1,fp2);
			if(dp[fp1][fp2] == -1)break;
		}
	}

}

void carry(int x,int i)
{
	if(dp[x][i] >= 1000){
		if(dp[x][i+1] == -1)dp[x][i+1] = 0;
		dp[x][i+1] += dp[x][i]/1000;
		dp[x][i] = dp[x][i]%1000;
	}
}


void show(int x)
{
	int fp;
	for(fp = 999; fp >=0; fp--){
		if(dp[x][fp] == -1)continue;
		if(dp[x][fp+1] == -1) printf("%d",dp[x][fp]);
		else if((dp[x][fp] < 100) && (dp[x][fp] > 9))printf("0%d",dp[x][fp]);
		else if(dp[x][fp] < 10)printf("00%d",dp[x][fp]);
		else printf("%d",dp[x][fp]);
	}
	printf("\n");
}
