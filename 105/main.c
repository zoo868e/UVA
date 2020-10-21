#include<stdio.h>
#include<string.h>

void addh(int *array,int l,int h,int r);
void addgap(int *array,int l,int h,int r);

int main(){
	int r,l,h,min = 10000,max = 0,lp = 0,ff;
	int array[10000];
	int gap[10000];
	memset(array,0,sizeof(array));
	memset(gap,0,sizeof(gap));
	while(scanf("%d %d %d",&l,&h,&r) != EOF){
		addh(array,l,h,r);
		addgap(gap,l,h,r);
		if(min > l)min = l;
		if(max < r)max = r;
	}
	int temp = array[min];
	/*for(ff = min;ff <= max;ff++){
		printf("array[%d] = %d\n",ff,array[ff]);
	}*/
	printf("%d %d",min,temp);
	for(;min < max;min++){
		if(array[min] != temp){
			temp = array[min];
			printf(" %d %d",min,temp);
			lp = min;
		}
		else if(gap[min] != temp){
			temp = gap[min];
			printf(" %d %d",min,temp);
			lp = min;
		}
	}
	if(lp != max)
	printf(" %d 0\n",max);
	else
		printf(" 0\n");
	return 0;
}

void addh(int *array,int l,int h,int r)
{
	int ff;
	for(ff = l;ff <= r;ff++){
		if(array[ff] < h)array[ff] = h;
	}
}

void addgap(int *array,int l,int h,int r)
{
	int ff;
	for(ff = l;ff < r;ff++){
		if(array[ff] < h)array[ff] = h;
	}
}
