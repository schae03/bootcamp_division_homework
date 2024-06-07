"""
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
"""

def main():
    year = int(input())
    month = int(input())

    if month==4 or month==6 or month==9 or month==11:
        print("30\n")
    elif month==2:
        if (year%4==0 and year%100!=0) or year%400==0:
            print("29\n")
        else:
            print("28\n")
    else:
        print("31\n")

    return


if __name__ == '__main__':
    main()
