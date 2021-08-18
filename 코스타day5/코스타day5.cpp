/*
#include <stdio.h>
#include <conio.h>

// function test 프로그램
// 기능: 키보드에서 단일 문자를 입력받고, 해당문자가 대(1)소문자(2)/숫자(3)/특수기호(4)인지 판별
// 함수를 선언하고 호출할 것 - 함수명: sub
int sub(char a);

int main()
{
	char c;
	while (1) {
		printf("아무키나 입력해주세요: ");
		c = getch(); //getch(): 하나의 단일문자를 입력받아서 문자로 되돌려줌
		if (sub(c) == 3) {
			printf(">입력하신 key [%c}는 숫자키 입니다\n", c);
		}
		else if (sub(c) == 1) {
			printf(">입력하신 key [%c}는 대문자키 입니다\n", c);
		}
		else if (sub(c) == 2) {
			printf(">입력하신 key [%c}는 소문자키 입니다\n", c);
		}
		else if (sub(c) == 4) {
			printf(">입력하신 key [%c}는 특수문자키 입니다\n", c);
		}
		else {
			break;
		}

		//if-else 대신 switch문을 사용
		
//		switch (sub(c)) {
//		case 1:
//			printf(">입력하신 key [%c}는 대문자키 입니다\n", c);
//			break;
//		case 2:
//			printf(">입력하신 key [%c}는 소문자키 입니다\n", c); break;
//		case 3:
//			printf(">입력하신 key [%c}는 숫자키 입니다\n", c); break;
//		case 4:
//			printf(">입력하신 key [%c}는 특수문자키 입니다\n", c); break;
//		default:
//			break;
//		}
		

	}
	
}

//sub함수
int sub(char a)
{
	int ret;
	if (a >= 0x30 && a <= 0x39) {
		ret = 3;
	}
	else if (a >= 65 && a <= 90) {
		ret = 1;
	}
	else if (a >= 97 && a <= 122) {
		ret = 2;
	}
	else if ((33 <= a && a <= 47) || (58 <= a && a <= 64) || (91 <= a && a <= 96) || (123 <= a && a <= 126)) {
		ret = 4;
	}
	return ret;
}

*/

//------------------------------배열---------------------------------

//성적만들기 project

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <time.h>


const int students = 20;

int score()
{
	
	srand(time(NULL));
	double avg, TOTAL=0;
	double kor[students], eng[students], math[students], total[students];
	double kt = 0.0, et = 0.0, mt = 0.0;
	//double random = (rand() % 1000 + 1)/10;
	for (int i = 0; i < students; i++) {
		kor[i] = (double) (rand() % 1000 + 1) / 10.0;
		eng[i] = (double) (rand() % 1000 + 1) / 10.0;
		math[i] = (double) (rand() % 1000 + 1) / 10.0;
	}
	printf("코스타 iot 국영수 점수 현황\n=============================\n    국       영       수\n");
	for (int i = 0; i < students; i++) {
		printf("%7.1f  %7.1f  %7.1f\n", kor[i],eng[i],math[i]);
		kt += kor[i]; et += eng[i]; mt += math[i];

		total[i] = kor[i] + eng[i] + math[i];
		TOTAL += total[i];

	}
	printf("=============================\n");
	printf("%7.1f  %7.1f  %7.1f :각 과목 총점\n", kt, et, mt);
	printf("%7.1f  %7.1f  %7.1f :각 과목 평균\n=============================\n", kt / students, et / students, mt / students);

	printf("%7.1f :총점\n%7.1f :평균", TOTAL,TOTAL/(3*students) );	
	return 0;
}

int main()
{
	score();
}