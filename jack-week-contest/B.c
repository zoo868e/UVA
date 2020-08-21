#include<stdio.h>
#include<ctype.h>

int main(){
	int count,c = 0,temp,t,turn = 0;
	char input[1000],print;
	scanf("%d",&count);
	gets(input);
	while(c < count){
		gets(input);
		for(temp = 0;input[temp]>0;temp++){
			if(temp == 0)printf("Case %d: ",c+1);
			if(input[temp] >= 'A' && input[temp] <= 'Z'){
				while(turn > 0){
					printf("%c",print);
					turn--;
}
				print = input[temp];
				turn = 0;
}
			if(input[temp] >= '0' && input[temp] <= '9')turn = turn * 10 + (input[temp] - '0');

}
		printf("\n");
		c++;
}
	return 0;
}
