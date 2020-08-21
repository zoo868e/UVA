#include <stdio.h>
#include <string.h>

int main(void){
	int ascii[96], temp, x;
	char get[1000];
	while(gets(get) != 0){
		memset(ascii, 0, 96);
		temp = 0;
		while(get[temp] != NULL){
			ascii[get[temp] - 32]++;
			temp++;
}
		x = 0;
		while(x < temp){
			if(ascii[x] > 0){
				printf("%d %d", x + 32, ascii[temp]);
}
}
		printf("\n");
}
	return 0;
}
