// cclass.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//두 개의 실수를 입력받아 모두 4.0 이상이면 "A", 모두 3.0 이상이면 "B", 아니면 "C" 라고 출력하는 프로그램을 작성하시오.

#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    printf("%d\n", a);

    if (a > 0) {
        printf("우효 쵸 럭키다제");
    }
    
    return 0;

}