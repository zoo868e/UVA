#include<stdlib.h>
typedef struct Tower Tower;
void show_Tower(Tower *t);
void print_ele(int ele);

void HANOI(int high, int step)
{
	Tower *t = new_Tower(high,0,0);
	show_Tower(t);
}

struct Tower
{
	int A;
	int B;
	int C;
};

Tower * new_Tower(int A, int B, int C);
void Tower_set(Tower *self, int A, int B, int C);

Tower * new_Tower(int A, int B, int C)
{
	Tower * t = (Tower *) malloc(sizeof(Tower));
	if(!t)
		return t;
	Tower_set( t, A, B, C);
	return t;
}

void Tower_set(Tower *self, int A, int B, int C)
{
	assert(self);
	self->A = A;
	self->B = B;
	self->C = C;
}

void show_Tower(Tower *t)
{
	printf("A=>	");
	print_ele(t->A);
	printf("B=>	");
	print_ele(t->B);
	printf("C=>	");
	print_ele(t->C);
}

void print_ele(int ele)
{
	while(ele > 1)printf("%d ",ele--);
	printf("\n");
}

int main(){
	int high,step;
	while(~scanf("%d %d",&high,&step)){
		HANOI(high,step);
}
}
