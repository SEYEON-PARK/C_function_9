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