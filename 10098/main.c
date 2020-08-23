#include <stdio.h>

void swap();

int main(){
    int n,wp,fp;
    char a[10];
    scanf("%d",&n);
    while(n > 0){
        wp = 0;
        gets(a);
        while(a[wp]!=NULL){
            for(fp = 0;fp < wp;fp++){
                if(a[wp] < a[fp])swap(a[wp],a[fp]);
            }
            wp++;
        }


        n--;
    }
    return 0;
}

void swap(int *a,int *b)
{
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}
