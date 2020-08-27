#include<stdio.h>

int main(){
	long int a,n1,n2,sum;
	scanf("%ld",&a);
	while(a!=-1){
		n1 = 0;
		n2 = 1;
		sum = n1 + n2;
		while(a > 0){
			n2 = n1 + 1;
			n1 = sum;
			sum = n1 + n2;
			a--;
		}
		printf("%ld %ld\n",n1,n1+n2);
		scanf("%ld",&a);
	}
	return 0;
}
