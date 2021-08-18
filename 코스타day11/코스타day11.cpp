#include <stdio.h>

struct person {

	const char* name[20];
	int kor;
	int eng;
	int total;
	
};


//두 점수의 위치를 바꿔주는 함수
void swap(int* a, int* b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;

}
void swap_c2(const char** a, const char** b)
{
	const char* c;
	c = *a;
	*a = *b;
	*b = c;

}


int main() {
	struct person member[10];

	FILE* fin = fopen("C:\\Users\\조석훈\\table1.txt", "r");
	FILE* fout = fopen("C:\\Users\\조석훈\\table.txt.o", "w+b"); 

	if (fin != NULL)
	{
		
		for (int i = 0; i < 10; i++){fscanf(fin,"%s", member[i].name);}
		for (int i = 0; i < 10; i++){fscanf(fin, "%d", &member[i].kor);}
		for (int i = 0; i < 10; i++){fscanf(fin, "%d", &member[i].eng);}
		for (int i = 0; i < 10; i++){fprintf(fout, "%s \n%d \n%d\n", member[i].name, member[i].kor, member[i].eng); printf("%s %d %d\n", member[i].name, member[i].kor, member[i].eng);}
		for (int i = 0; i < 10; i++) { member[i].total = member[i].kor + member[i].eng;  }
		

		for (int q = 0; q < 15; q++)
		{
			for (int k = 0; k < 10; k++)
			{
				if (member[k].total > member[k+1].total) {
				}
				else if (member[k].total < member[k + 1].total)
				{
					
					
					swap(&member[k].total, &member[k + 1].total);
					swap(&member[k].kor, &member[k+1].kor);
					swap(&member[k].eng, &member[k + 1].eng);
					swap_c2(member[k].name, member[k + 1].name);
					
				}
			}
		}

		printf("순위:   성명    국어       영어       합계\n===========================================\n");
		for (int j = 0; j < 10; j++) {
			fprintf(fout,"%d:    %s %d %d %d\n", (j + 1), member[j].name, member[j].kor, member[j].eng, member[j].total);
			printf("%d: %s %d %d %d\n", (j + 1), member[j].name, member[j].kor, member[j].eng, member[j].total);
		}
	}
	else printf("입력파일 존재하지 않습니다\n");


}


	

