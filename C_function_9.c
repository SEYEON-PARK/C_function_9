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

void reverse(const int from[], int* to, int n);
void write_array(const int a[], int n);

int main(void)
{
	int n = 0;
	int array[10] = { 0 };
	int back[10] = { 0 };
	printf("10개 이하의 정수를 입력하시오. 다 입력했으면 -100을 입력하시오. : ");
	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d", &array[i]);
		if (array[i] == -100)
			break;
		n++;
	}
	write_array(array, n);
	reverse(array, back, n);
	
	return 0;
}
void reverse(const int from[], int* to, int n)
{
	int i = 0;
	for (int j = n-1; j >= 0; j--)
	{
		to[i] = from[j];
		i++;
	}
	write_array(to, n);
}
void write_array(const int a[], int n)
{
	printf("%d : ", n);
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}
