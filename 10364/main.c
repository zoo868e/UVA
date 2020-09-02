#include <stdio.h>
#include <string.h>
#define max 10000

void swap();
int dfs();
int stick[22];

int main(){
	int n,m;
	scanf("%d",&n);
	while(n){
		scanf("%d",&m);
		int temp,sum=0,fp;
		memset(stick,0,sizeof(stick));
		for(temp = 0;temp < m;temp++){
			scanf("%d",&stick[temp]);
			sum += stick[temp];
		}
		if((sum % 4) || (stick[0] > (sum / 4))){
			printf("no\n");
			n--;
			continue;
		}
		if(dfs(stick,m,0,sum/4,0,0))printf("yes\n");
		else printf("no\n");
		n--;
	}
	return 0;
}

void swap(int *a,int *b)
{
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}

int dfs(int stick[],int m,int count,int target,int sum,int id)
{
	if(count == 3)return 1;
	if(sum == target)return dfs(stick,m,count+1,target,0,0);
	int i = id;
	for(i;i < m; i++){
		if(!stick[i] || ((sum + stick[i]) > target))continue;
		int temp = stick[i];
		stick[i] = 0;
		if(dfs(stick,m,count,target,sum+temp,i+1))return 1;
		stick[i] = temp;
	}
	return 0;
}
