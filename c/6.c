/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    char a;
    scanf("%c", &a);

    if(a=='a' || a=='i' || a=='e' || a=='o' || a=='u')
        printf("O\n");
    else
        printf("X\n");

    return 0;
}