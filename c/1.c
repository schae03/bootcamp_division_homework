/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    int a;
    int b=0;
    scanf("%d", &a);

    for(int i=0; i<3; i++) {
        b=b*10;
        b=b+a%10;
        a=a/10;
    }
    printf("%d", b);

    return 0;
}