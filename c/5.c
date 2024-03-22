/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d\n%d", &a, &b);

    if(a>=14 || b>=160)
        printf("X\n");
    else
        printf("O\n");

    return 0;
}