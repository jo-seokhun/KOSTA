﻿#include <stdio.h>


int main() {
	int i, k;
	char p[]="\n\n박솔(2000.5.29)\n해병대 兵1255期 전역전휴가 후 휴식없이 독서실행\n3km 기록 18분대\n수능D-101\n~21.11.18까지 고생\n애인無\n한살늙음\n\n";
	char j[] = "\n\n조석훈(2001.02.18)\n해병대 兵1255期 전역전휴가 후 2주휴식 후 코딩학원행\n 3km 기록 13분대\n~21.12.17까지 고생\n애인有\n한살젊음\n\n";
	while (1) {
		
		printf("박솔 vs 조석훈 누가더 불쌍한가 ");
		scanf("%d", &i);
		if (i == 1) {
			printf("%s",p);
		}
		else if (i == 2) {
			printf("%s",j);
		}
		else if (i == 3) {
			printf("===============================================================\n휴식없이 독서실행       2주휴식 후 코딩학원행 : 무승부 0:0\n3km 기록 18분대         3km 기록 13분대       : 조석훈 승 0:1\n~21.11.18까지 고생      ~21.12.17까지 고생    : 박솔 승 1:1\n애인無                  애인有                : 조석훈 승 1:21\n한살늙음                한살젊음              : 조석훈 승 1:31\n===============================================================\n총 score   1:31 조석훈 승");
			break;
		}
	}
	

}