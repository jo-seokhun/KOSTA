
/*포인터도 주소값을 담고있는 변수다 포인터는 4바이트  
메모리관리 한페이지가 32비트포인터 기호는"*"
데이터 타입을 갖는다 
&a = 변수 a의 주소값을 알려주는것
int *pa =&a 얘는 선언하는것
printf("%d",*pa)  얘는 pa의 담겨져있는 주소 즉 a를 출력한다
포인터 배열 가장많이쓰는건 문자열배열 ex) char*[3]={  ~~~  }
call-by-value   
call-by-reference 함수넣어줄때 주소값 받을때 포인터사용해야함
이유는 메모리를 새로만들기때문에 메인함수의 주소를 아예바꿔야함
포인터와 배열은 같은것이다! *==[]
void포인터: 무소속 ; 형이정해지지않은것 
실제로쓸때 casting 해줘야함 즉 주소정보를 담을수있는 형태의 변수
구조체: struct = 배열과 비슷한데 배열은 동일한 데이터타입 가능 but strunt는 여러 다양한 데이터타입 가능
ex) struct A {int x; char c; double b;}; 가능
구조체 배열도 가능 struct person arr[10]
사용자 정의 자료형:typedef
표준 입출력 스트림: std___   stdin 표준 입력 스트림(키보드) stdout 표준 출력 스트림(모니터)
문자출력함수: putchar / fputc:파일 출력
문자입력함수: getchar / fgetc: 파일 입력
많이쓰이는건 fprintf, fscanf
EOF: end-of-file 파일의 끝을 표현하기위한 상수
*/

#include <stdio.h>
#include <string.h>

void streamtest() 
{
	char buf[1024];
	FILE* f;
	f= fopen("C:\\Users\\조석훈\\first.txt", "r"); //FILE은 포인터 사용, fopen("장소","r||w")출력용일때는 "w"(overwrite),"a"(추가한다) 
	if (f != NULL)
	{
		while (1)
		{
			if (fgets(buf, 1024, f) == NULL) break;
			fputs(buf, stdout);
		}

	}
	else printf("입력파일 존재하지 않습니다\n");
	
	
}

int main() {
	streamtest();
}