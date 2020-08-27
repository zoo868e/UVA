#include <stdio.h>
#include <string.h>
 
int t[10];
int save[10][10];
char n[105], m[105];
 
int solve(int num) {
	int lenn = strlen(n);
	int mod = 0;
 	for (int i = 0; i < lenn; i++) {
		mod = (mod * 10 + n[i] - '0') % num;
 	}
 	mod--;
 	if (mod < 0) mod = num - 1;
 	return mod;
}
 
int main() {
	for (int i = 0; i < 10; i++) {
		int tmp = i;
		save[i][t[i]++] = i;
		tmp = tmp * i % 10;
		while (tmp != i) {
			save[i][t[i]++] = tmp;
   			tmp = tmp * i % 10;
  		}
 	}
  	while (~scanf("%s%s", m, n)) {
   		if (strcmp(m, "0") == 0 && strcmp(n, "0") == 0) break;
   		int start = m[strlen(m) - 1] - '0';
   		printf("%d\n", save[start][solve(t[start])]);
    } 	
	return 0;
}
