
#include <stdio.h> 
#include <conio.h> 

int main()
{
	char name[20];
	int age;
	int height;
	float fact = 100.0;

	printf("당신의 이름을 입력하세요:");
	scanf("%s", name);

	printf("키를 cm단위로 입력해주세요\n나이도 입력해주세요:");
	scanf("%d %d", &height, &age);



	printf("안녕하세요.\n%s씨 반갑습니다.\n", name);

	printf("저는 %5d 살이에여\n키는 %5.2f m에요", age, (float)(height) / fact);



	getch();


}



