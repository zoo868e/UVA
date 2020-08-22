#include <stdio.h>
#include <math.h>

int main(void){
    int count,ft;
    double n;
    scanf("%le",&n);
    while(n > 0){
        n = sqrt(n);
        if(n - (int)n)printf("no\n");
        else printf("yes\n");
        scanf("%le",&n);
    }
    return 0;
}
