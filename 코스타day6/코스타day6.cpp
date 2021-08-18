/*
#include <stdio.h>
#include <conio.h>

int good() 
{
	int time;
	char morning[] = "good morning";
	char afternoon[] = "good afternoon";
	char evening[] = "good evening";
	char night[] = "good night";
	

	while (1) {
		printf("지금 몇시죠? ");
		scanf("%d", &time);
		if (6 < time && time < 12) {
			printf("%s\n", morning);
			
		}
		else if (12 <= time && time <= 18) {
			printf("%s\n", afternoon);
			
		}
		else if (18 < time && time < 23) {
			printf("%s\n", evening);
		}
		else if ((23 <= time && time <= 24) || time<=6) {
			printf("%s\n", night);
		}
		
		
	}
	

}

int change(char a)
{
	int k;
	
		
	if (a == '0') { k = 0; }
	else if (a == '1') { k = 1; }
	else if (a == '2') { k = 2; }
	else if (a == '3') { k = 3; }
	else if (a == '4') { k = 4; }
	else if (a == '5') { k = 5; }
	else if (a == '6') { k = 6; }
	else if (a == '7') { k = 7; }
	else if (a == '8') { k = 8; }
	else if (a == '9') { k = 9; }
	else { printf("숫자키 입력 ");  }
	
	return k;
}

int arraytest()
{
	char str[1000];
	
	printf("문자열 입력: ");
	scanf("%s", str);

	printf("숫자입력: ");
	char num=getch();
	
	printf("%c", str[change(num)]);

	
	return 0;
	
}

int howlong(char * str)//문자열 str을 받아서 해당 문자열의 길이를 되돌려 줌 ------ [] == * 
{
	int ret = 0;
	//while(*(str+ret++)); return ret;
	while (1) {
		if (str[ret] != 0) ret++;
		else break;
	}

	return ret;
}

int jump() 
{
	int i,j;
	char buf[100];
	printf("문자열을 입력하세요 : "); scanf("%s", buf);
	printf("입력문자열 [%s] 의 길이는 %d 입니다 \n", buf, j = howlong(buf));
	for (i = 0; i < j; i++)
	{
		printf("%c_", buf[i]);
	}
	
	return 0;
	
}

int swap(int a, int b)
{
	int c; c = a; a = b; b = c;
}


*/

