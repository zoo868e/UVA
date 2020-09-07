#include <stdio.h>
#include <string.h>

int del();
int answer();



int main(){
	int n,m,testcase,temp,ntemp,domino[100000],set[100000];
	scanf("%d",&testcase);
	while(testcase--){
		scanf("%d%d",&n,&m);
		for(int fp = 0;fp < n;fp++)domino[fp] = 1;
		while(m--){
			scanf("%d%d",&temp,&ntemp);
			domino[ntemp] = domino[ntemp] & 0;
		}
		int fp,count = 0;
		for(fp = 1;fp < n;fp++)
			if(domino[fp] == 1)count++;
		printf("%d\n",count);
	}
	return 0;
}

/*int answer(int domino[],int count,int len)
{
	while(len--){
		printf("now at domino[%d] = %d\n",len,domino[len]);
		if(domino[len] > 0){
			if(del(domino,len) > 0)count++;
		}
	}
	return count;
}

int del(int domino[],int posi,int start)
{
	int temp = domino[posi];
	printf("posi = %d temp = %d\n",posi,temp);
	if(temp == 0){
		domino[posi] = -1;
		printf("count++ at domino[%d]\n",posi);
		return 1;
	}
	else if(temp == -1 || temp == start){
		domino[posi] = -1;
		return -1;
	}
	else if(temp == -2){
		domino[posi] = -1;
		printf("count++ at domino[%d]\n",posi);
		return 1;
	}
	else{
		domino[posi] = -2;
		if(del(domino,temp)){
			return 1;
		}
		else return -1;
	}
}*/
