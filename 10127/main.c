#include <stdio.h>

int main(){
    int count,a,x;
    while(scanf("%d", &a)!=EOF){
        count = 1;
        x = 1;
        while(x % a){
            x = x * 10 + 1;
            x = x % a;
            count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
