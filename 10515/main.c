#include <stdio.h>
#include <math.h>
#include <string.h>

int anss[10][4] = {
    0,0,0,0,
    1,1,1,1,
    6,2,4,8,
    1,3,9,7,
    6,4,6,4,
    5,5,5,5,
    6,6,6,6,
    1,7,9,3,
    6,8,4,2,
    1,9,1,9
};
int ansnumm[10] = {1,1,4,4,2,1,1,4,4,2};

int main(){
	int fp,ffp;
	char m[101],n[101];
	while(scanf("%s %s",m,n)&&((n[0] != '0') || (m[0] != '0'))){
        	int x = 0,nlen = strlen(n),mlen = strlen(m);
		for(fp = 0;(fp < 2) && (fp < nlen);fp++){
        	    x = x + (n[nlen-fp-1] - '0')*pow(10,fp);
		    }
        	if(x == 0){
        	    printf("1\n");
        	    continue;
        	}
        	printf("%d\n",anss[m[mlen-1] - '0'][x % ansnumm[m[mlen-1] - '0']]);
}
	return 0;
}
