// up&down 게임
// 기능: 사용자의 이름/게임 실행여부/난이도를 입력받아 updown게임
#include <stdio.h>

#include <stdlib.h> 

#include <time.h> 

int main()
{
	srand(time(NULL));
	int a, b, c, d, e, f, g;
	char name[50];
	int random = 0;


	printf("up&down게임을 실행하려면 숫자키 1을 눌러주세요");
	scanf("%d", &a);
	if (a == 1) {
		printf("본인의 이름을 작성해주세요: ");
		scanf("%s", name);
		printf("%s님 게임 난이도를 설정해주세요(1- easy, 2-normal, 3-hard):", name);
		scanf("%d", &c);
		if (c == 1) {
			random = rand() % 9 + 1;

			while (1)
			{
				printf("숫자를 입력해주세요(1~9): ");
				scanf("%d", &b);
				if (random < b) {
					printf("DOWN");
				}
				else if (random > b) {
					printf("UP");
				}
				else if (random == b) {
					printf("정답입니다.");
					break;
				}
			}
		}
		if (c == 2) {
			random = rand() % 50 + 1;

			while (1)
			{
				printf("숫자를 입력해주세요(1~50): ");
				scanf("%d", &d);
				if (random < d) {
					printf("DOWN");
				}
				else if (random > d) {
					printf("UP");
				}
				else if (random == d) {
					printf("정답입니다.");
					break;
				}
			}

		}
		if (c == 3) {
			random = rand() % 100 + 1;

			while (1)
			{
				printf("숫자를 입력해주세요(1~100): ");
				scanf("%d", &e);
				if (random < e) {
					printf("DOWN");
				}
				else if (random > e) {
					printf("UP");
				}
				else if (random == e) {
					printf("정답입니다.");
					break;
				}
			}

		}

	}
}
