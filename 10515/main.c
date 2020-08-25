#include <stdio.h>
#include <string.h>

void ans();
int check();
int checkre();
void genans();

char n[110],m[110];


int forans[10][10],ansnum[10];

int main(){
	int fp,ffp;
	genans();
	for(fp = 0;fp<10;fp++)printf("ansnum[%d] = %d\n",fp,ansnum[fp]);
	scanf("%s %s",m,n);
	while(check(n,m)){
		ans();
		scanf("%s %s",m,n);
	}
	return 0;
}

void ans()
{
	int fp,a = m[strlen(m)-1]-'0';
	int i = ansnum[a];
	int x = n[strlen(n)-1]-'0' + (n[strlen(n)-2]-'0')*10;
	printf("%d\n",forans[a][(x+i-1)%i]);
}

int check(char n[],char m[])
{
	if(((n[strlen(n)-1] - '0') == 0) && ((m[strlen(m)-1] - '0') == 0))return 0;
	return 1;
}

int checkre(int temp,int a)
{
	int fp = 0;
	while(forans[a][fp] >= 0){
		if(forans[a][fp] == temp)return 0;
		fp++;
	}
	return 1;
}

void genans()
{
	int fp,i = 1,temp,wp;
	memset(ansnum,1,sizeof(ansnum));
	memset(forans,-1,sizeof(forans));
	forans[0][0] = 0;
	forans[1][0] = 1;
	for(fp = 1;fp < 10;fp++){
		temp = fp;
		wp = 0;
		forans[fp][wp] = temp;
		while(1){
			temp = temp * fp;
			temp = temp % 10;
			if(checkre(temp,fp)){
				forans[fp][++wp] = temp;
				ansnum[fp]++;
			}
			else break;
		}
	}
}
