#include <stdio.h>

int main(){
	int count,c = 0,n,temp,t,ans;
	scanf("%d",&count);
	while(c < count){
		c++;
		ans = 1;
		scanf("%d",&n);
		int T[n][n];
		for(temp = 0;temp < n ;temp++){
			for(t = 0;t < n;t++){
				scanf("%d",&T[temp][t]);
}
}
		for(temp = 0;temp < n;temp++){
			for(t = temp;t < n;t++){
				if((T[t][temp] != T[temp][t])){
					ans = 0;
					break;
}
}
}
		if(ans == 1)printf("Test #%d: Symmetric.\n",c);
		else printf("Test #%d: Non-symmetric.\n",c);
}
	return 0;
}
