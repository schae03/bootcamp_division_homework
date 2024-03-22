/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    int n, sum=0;
    scanf("%d", &n);

    while(1) {
        if(n<=0) {
            printf("X\n");
            scanf("%d", &n);
            continue;
        }
        else if(n>0) {
            for(int i=1; i<=n; i++)
                sum=sum+i;
            printf("%d\n", sum);
            break;
        }
    }

    return 0;
}