#include<stdio.h>
#include<string.h>
#include<math.h>

int dp[801][500];

void gendp();

int main(){
    unsigned long long dn[801];
    int n,fp;
    memset(dn,0,sizeof(dn));
    dn[1] = 0;
    for(fp = 2;fp <= 800;fp++)
        dn[fp] = fp*dn[fp-1] + pow(-1,fp);
    scanf("%d",&n);
    while(n != -1){
        printf("%llu\n",dn[n]);
        scanf("%d",&n);
    }
    return 0;
}

void gendp()
{
	memset(dp,0,sizeof(dp));
	int fp1,fp2;
	for(fp1 = 2;fp1 <= 800;fp1++){
		for(fp2 = 0;fp2 < 500;fp2++){
			dp[fp1][fp2] = fp1*dp[fp1-1][fp2];
		}
		dp[fp1][0] += pow(-1,fp1);
	}

}

void carry(int x,int i)
{
	if(dp[i] > 1000){
		dp[x][i+1] = dp[x][i]/1000;
		dp[x][i] = dp[x][i]%1000;
		carry(i+1);
	}
}
