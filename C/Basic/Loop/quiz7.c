#include <stdio.h>

int main() {
    // 1. 구구단 3단 출력
    printf("********** 구구단 3단 **********\n");
    int dan = 3; 
    for (int i = 1; i <= 9; i++) {
        printf("%d x %d = %d\n", dan, i, dan * i);
    }
    
    printf("\n"); // 줄바꿈으로 구분
    
    // 2. 대문자 A ~ Z 출력
    printf("******** 대문자 (A ~ Z) ********\n");
    
    // 'A'의 아스키 코드 값부터 'Z'의 아스키 코드 값까지 반복
    // char 타입은 문자와 그에 해당하는 아스키 코드 값으로 모두 사용될 수 있습니다.
    for (char c = 'A'; c <= 'Z'; c++) {
        printf("%c ", c);
    }
    
    printf("\n\n"); // 줄바꿈으로 구분
    
    // 3. 소문자 a ~ z 출력
    printf("******** 소문자 (a ~ z) ********\n");
    
    // 'a'의 아스키 코드 값부터 'z'의 아스키 코드 값까지 반복
    for (char c = 'a'; c <= 'z'; c++) {
        printf("%c ", c);
    }
    
    printf("\n"); // 마지막 줄바꿈

    return 0;
}
