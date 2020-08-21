#include<stdio.h>

struct node{
	char name;
	int count;
};

int main(void){
	int count,ans[26],i,a;
	char t[5000];
	for(i=0;i<=26;i++)ans[i]=0;
	scanf("%d",&count);
	while(count >= 0){
		gets(t);
		a = 0;
		while(t[a] != NULL){
			if((int)t[a]<65 || ((int)t[a]>90 && (int)t[a]<97) || (int)t[a]>122){
				a++;
				continue;
}
			else{
			i = t[a] & '_' ;
			printf("%c",i);
			ans[i-65]++;
			a++;
}
}
		count--;
}
/*put ans to node*/
	count = 0;
	i = 0;
	while(i<26){
		if(ans[i] > 0){
			count++;
}
		i++;
}
	struct node n[count],temp;
	a = 0;
	i = 0;
	while(i<26){
		if(ans[i] > 0){
			n[a].name = i + 65;
			n[a].count = ans[i];
			a++;
}
		i++;
}
	int x = 0;
/*sort node*/
	for(x = count-1; x > 0;x--){
		int flag = 0;
		int j = 0;
		for(j = 0; j < x; j++){
			if(n[j].count < n[j+1].count){
				struct node temp = n[j];
				n[j] = n[j+1];
				n[j+1] = temp;
				flag = 1;
}
}
		if(flag == 0)break;
}
/*print ans*/
	i = 0;
	while(i<count){
		printf("%c %d\n",n[i].name,n[i].count);
		i++;
}
	
	return 0;
}

