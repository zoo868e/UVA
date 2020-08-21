#include <stdio.h>
#include <string.h>

void swap();

int main(void){
	int i = 0,t,j;
	long n[10000],temp;
	
	memset(n,-1,10000);

	while((i < 10000) && (scanf("%ld",&temp)!=EOF)) {
		n[i] = temp;
		for(j = i;j>0;j--){
			if(n[j] < n[j-1])swap(&n[j],&n[j-1]);
			else break;
}


		
		if(i == 0)printf("%ld\n",n[i]);
		else if((i + 1)%2)printf("%ld\n",n[i/2]);
		else printf("%ld\n",(n[i/2] + n[(i/2)+1])/2);
		i++;
}
	return 0;
}

void swap(long *a,long *b)
{
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}
