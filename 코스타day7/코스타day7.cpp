#include <stdio.h>
#include <conio.h>

int swap(int a,int b) 
{
	int c; c = a; a = b; b = c;
}
const int students = 10;


int main()
{
	int  kor[7], eng[7];
	kor[0] = 82, kor[1] = 93, kor[2] = 71, kor[3] = 69, kor[4] = 78, kor[5] = 84, kor[6] = 75;

	eng[0] = 82, eng[1] = 76, eng[2] = 91, eng[3] = 67, eng[4] = 86, eng[5] = 63, eng[6] = 83;

	for (int i = 0; i < 7; i++)
	{
		kor[i] == 0.3 * kor[i];
	}

	for (int j = 0; j < 7; j++)
	{
		printf("%d", kor[j]);
	}



	return 0;
}