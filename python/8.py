"""
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
"""

def main():
    n = int(input())
    sum=0
    mul=1

    for i in range(n):
        sum=sum+(i+1)
        mul=mul*(i+1)
    print(sum)
    print(mul)
    print()

    return


if __name__ == '__main__':
    main()
