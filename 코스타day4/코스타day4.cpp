//------------------------------------------------반복문------------------------------------------------

/* //########구구단 코딩########
   //기능: 구구단의 단수를 입력하면 구구단이 출력됌
#include <stdio.h>
int main()
{
	int num;
	printf("구구단 단수를 입력해주세요: ");
	scanf("%d", &num);

	for (int i = 1; i < 10; i++)
	{
		int result = num * i;
		printf("%2d * %2d = %3d\n", num, i, result);

	}
}
*/

/*
// #####구구단 책갈피#####(mine)
// 기능: 구구단 2~9단을 책갈피 형식으로 출력함
#include <stdio.h>
int main()
{
	int dan;
	int dan2;
	int i = 1;
	int j = 1;

	for (i;i<10;i++)
	{
			for (dan = 2; dan < 6; dan++)
			{
				printf("%2d * %2d = %3d         ", dan, i, dan * i);
			}
			printf("\n");
	}


	printf("\n\n\n\n\n\n");

	for (j; j < 10; j++)
	{
		for (dan2 = 6; dan2 < 10; dan2++)
		{
			printf("%2d * %2d = %3d         ", dan, j, dan * j);
		}
		printf("\n");
	}

}
*/

/*
// ####구구단책갈피(2*4)####(teacher) --- 상수가 적을수록 유연성이 증가한다
// 기능: 구구단의 책갈피를 유동적으로 변경 가능함
#include <stdio.h>
int main() 
{
	int dan = 2; // 구구단의 x단 ~9단
	int hdan = 4; // 가로방향의 열 수
	
	for (; dan < 10; dan += hdan) 
	{
		for (int i = 1; i <= 9; i++) //*1 ~ *9 
		{
			for(int j = 0;j<hdan;j++) 
			{
				printf("%2d * %2d = %3d    ", dan+j, i, (dan+j) * i);
			}
			printf("\n");
		}
		printf("\n\n\n\n\n");
	}
}
*/

/*
 #include <stdio.h> 
#include <conio.h> 
int main()
{
	char name[20];
	int age;
	int height;
	float fact = 100.0;
	//int index = 0 ;
	
	//while (index<2)
	
	for(int index=0; index<2; index++) // 변수 ; 수행조건 ; 증감
	{
		printf("당신의 이름을 입력하세요:");
		scanf("%s", name);

		printf("키를 cm단위로 입력해주세요\n나이도 입력해주세요:");
		scanf("%d %d", &height, &age);



		printf("안녕하세요.\n%s씨 반갑습니다.\n", name);

		printf("저는 %5d 살이에여\n키는 %5.2f m에요\n", age, (float)(height) / fact);

		//index++;
	}

	getch();
	return 0;

}
*/

//------------------------------------------------조건문------------------------------------------------

/*
 #include <stdio.h>
 #include <conio.h>
int main()
{
	int a;
		while (1) {
			printf("숫자키를 누르시오");
			scanf("%d", &a);


			if (a == 1) {
				printf("one\n");

			}
			else if (a ==2) {
				printf("two\n");

			}
			else if (a == 3) {
				printf("three\n");

			}
			else if (a == 4) {
				printf("four\n");

			}
			else if (a == 5) {
				printf("five\n");


			}
			else if (a == 6) {
				printf("six\n");


			}
			else if (a == 7) {
				printf("seven\n");


			}
			else if (a == 8) {
				printf("eight\n");

			}
			else if (a == 9) {
				printf("nine\n");

			}
			else if (a == 0) {
				printf("zero\n");

			}
			else  break; 


		}
		printf("종료하려면 아무키나 누르셈");
		getch();
	
	}

	*/



