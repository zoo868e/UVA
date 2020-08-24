#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
    unsigned long long dn[801];
    int n,fp;
    memset(dn,0,sizeof(dn));
    dn[1] = 0;
    for(fp = 2;fp <= 800;fp++)
        dn[fp] = fp*dn[fp-1] + pow(-1,fp);
    scanf("%d",&n);
    while(n != -1){
        printf("%llu\n",dn[n]);
        scanf("%d",&n);
    }
    return 0;
}
