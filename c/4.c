/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    if(a<=100 && a>=90)
        printf("A\n");
    else if(a<90 && a>=80)
        printf("B\n");
    else if(a<80 && a>=70)
        printf("C\n");
    else if(a<70 && a>=60)
        printf("D\n");
    else
        printf("F\n");
        
    return 0;
}