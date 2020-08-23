#include <stdio.h>
#include <string.h>

char data[11];
char save[3628800][11];
char temp[11];
int  used[11];
 
int  Count;

void swap(char *a,char *b)
{
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

void dfs( int d, int n )
{
	int flag = 1,i;
	for ( i = 0 ; i < d ; ++ i )
		if ( save[Count-1][i] != temp[i] ) {
			flag = 0;break;
		}
	if ( d && flag ) return;
	
	if ( d == n ) {
		for ( i = 0 ; i < n ; ++ i )
			save[Count][i] = temp[i];
		save[Count ++][n] = 0;
	}
	for ( i = 0 ; i < n ; ++ i )
		if ( !used[i] ) {
			used[i] = 1;
			temp[d] = data[i];
			dfs( d+1, n );
			used[i] = 0;
		}
}
int main(){
    int n,wp,fp;
    scanf("%d",&n);
    while(n--){
        wp = 0;
        scanf("%s",data);
        while(data[wp]){
            for(fp = 0;fp < wp; fp++){
                if(data[wp] < data[fp])swap(&data[wp],&data[fp]);
            }
            wp++;
        }
        Count = 1;
		memset(save,0,sizeof(save));
        dfs(0,strlen(data));
		for(fp = 1;fp < Count;fp++)
			printf("%s\n",save[fp]);
        printf("\n");
}
    return 0;
}
