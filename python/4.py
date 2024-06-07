"""
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
"""

def main():
    num = int(input())

    if num>=90 and num<=100:
        print("A\n")
    elif num>=80 and num<90:
        print("B\n")
    elif num>=70 and num<80:
        print("C\n")
    elif num>=60 and num<70:
        print("D\n")
    else:
        print("F\n")

    return


if __name__ == '__main__':
    main()
