#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



int main()
//1에서 100까지의 합 구하기
{
	int i = 0; //초기값
	int sum = 0;

	while (i < 100) {
		//증감
		sum += ++i;    // sum= sum+i;
	}

	//힙계를 출력
	printf("%d\n", sum);

	return 0;

}
