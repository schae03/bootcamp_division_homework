/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d\n%d", &a, &b);

    if(b==4 || b==6 || b==9 || b==11)
        printf("31\n");
    else if(b==2){
        if((a%4==0 && a%100!=0) || a%400==0)
            printf("29\n");
        else
            printf("28\n");
    } 
    else
        printf("31\n");
        
    return 0;
}