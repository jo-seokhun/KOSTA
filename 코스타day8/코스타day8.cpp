#include <stdio.h>

//포인터 배열 위치 바꿔주는 것
void SWAP(void* a, void* b, int op)
{
	if (op == 1)
	{
		char c;
		c = *(char*)a;
		*(char*)a = *(char*)b;
		*(char*)b = c;
	}
	else if (op == 4)
	{
		int c;
		c = *(int*)a;
		*(int*)a = *(int*)b;
		*(int*)b = c;
	}
	else if (op == 8)
	{
		double c;
		c = *(double*)a;
		*(double*)a = *(double*)b;
		*(double*)b = c;
	}



}
void Voidprint(void* p, int i) 
{
	if (i == 1) {printf("%c", *(char*)p);}
}
void Voidtest() {
	char c = 'z';
	int n = 10;
	double a = 1.414;
	

	void* vp;
	Voidprint(&c, 1);
	Voidprint(&n, 1);
	Voidprint(&a, 1);

}
int main() {
	Voidtest();
}