#include <stdio.h>
#include <string.h>


int status[100000];	/*down = 0,stand = 1,push = 2*/

void reduce();

int main(){
	int n,m,testcase,temp,ntemp,wp,fp;
	status[0] = 0;
	scanf("%d",&testcase);
	while(testcase--){
		scanf("%d%d",&n,&m);
		int link[2*m+10];
		memset(link,0,sizeof(link));
		wp = m;
		status[0] = 0;
		int inlink = 0;
		for(fp = 1;fp <= n;fp++)status[fp] = 1;
		while(wp--){
			scanf("%d%d",&temp,&ntemp);
			link[inlink] = temp;
			link[inlink+1] = ntemp;
			inlink += 2;
			/*printf("link[%d][%d] = %d\n",temp,inlink,link[temp][inlink]);*/
		}
		reduce(link,n+1,m);
		int fp,count = 0;
		for(fp = 1;fp <= n;fp++)
			/*printf("status[%d] = %d\n",fp,status[fp]);*/
			if(status[fp] > 0)count++;
		printf("%d\n",count);
	}
	return 0;
}

void reduce(int link[],int n,int m)
{
	int wp = 0,temp,fp,c;
	while(wp < 2*m+10){
			c = link[wp];
			wp++;
			temp = link[wp];
			wp++;
			/*printf("c = %d,temp = %d\n",c,temp);*/
			/*if c's status is stand, set the status[c] to push and status[temp] to down*/
			/*if c's status is down, set status[temp] to down*/
			/*if c's status is push, set status[temp] to down*/
	
			if(temp == 0){
				break;
			}
			/*printf("link[%d][%d] = %d\n",c,fp,temp);
			printf("status[%d] = %d\n",c,status[c]);
			printf("status[%d] = %d\n",temp,status[temp]);*/

			/*c is down*/
			if(status[c] == 0){
				/*temp is stand*/
				if(status[temp] == 1){
					status[temp] = 0;
					continue;
				}
				else{
					continue;
				}
			}
			/*c is stand*/
			if(status[c] == 1){
				/*temp is down*/
				if(status[temp] == 0){
					continue;
				}
				else{
					status[c] = 2;
					status[temp] = 0;
					continue;
				}
			}
			/*c is push*/
			if(status[c] == 2){
				status[temp] = 0;
				continue;
			}
		}
	
}
