#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



int main()
//1에서 100까지의 합 구하기
{
	int sum = 0;
	for (int i = 1; i <= 100; i++){
		sum += i;
		printf("sum: %d, i:%d\n", sum, i);
	}
	/*printf("sum: %d\n", sum);*/
	
	

	return 0;

}
