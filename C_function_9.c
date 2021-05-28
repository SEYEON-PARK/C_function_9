/*
크기가 n인 배열 from을 역순으로 to에 저장하는 함수 작성
void reverse(const int from[], int to[], int n);

크기가 n인 배열 a를 출력하는 함수 작성
void write_array(const int a[], int n);

초기화된 배열과 이 함수들을 이용하여 역순 배열을 만들어 출력

실행 예
	 	5: 10 20 30 40 50
		5: 50 40 30 20 10
*/

#include <stdio.h>

void reverse(const int from[], int* to, int n); // 함수 원형 적어주기
void write_array(const int a[], int n); // 함수 원형 적어주기

int main(void)
{
	int n = 0; // 변수 선언 및 초기화
	int array[10] = { 0 }; // 배열 선언 및 초기화
	int back[10] = { 0 }; // 배열 선언 및 초기화
	printf("10개 이하의 정수를 입력하시오. 다 입력했으면 -100을 입력하시오. : "); // 안내문 출력
	for (int i = 0; i < 10; i++) // i가 0부터 9까지 1씩 증가하며 반복
	{
		scanf_s("%d", &array[i]); // 사용자로부터 정수 입력받기
		if (array[i] == -100) // 만약 array[i]가 -100이라면
			break; // 반복문을 빠져나가기
		n++; // n에 1 더하기
	}
	write_array(array, n); // write_array() 호출하기
	reverse(array, back, n); // reverse() 호출하기
	
	return 0;
}
void reverse(const int from[], int* to, int n)
{
	int i = 0; // 변수 선언 및 초기화
	for (int j = n-1; j >= 0; j--) // j가 n-1부터 0보다 크거나 같을 때까지 1씩 감소하며 반복
	{
		to[i] = from[j]; // to[i]에 from[j] 대입하기
		i++; // i에 1 더하기
	}
	write_array(to, n); // write_array() 호출하기
}
void write_array(const int a[], int n)
{
	printf("%d : ", n); // n의 값 출력하기
	for (int i = 0; i < n; i++) // i가 0부터 n-1까지 1씩 증가하며 반복
	{
		printf("%d ", a[i]); // a[i] 출력하기
	}
	printf("\n"); // 한 줄 띄기
}
