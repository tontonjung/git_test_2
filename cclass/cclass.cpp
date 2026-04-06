// cclass.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//두 개의 실수를 입력받아 모두 4.0 이상이면 "A", 모두 3.0 이상이면 "B", 아니면 "C" 라고 출력하는 프로그램을 작성하시오.

#include <stdio.h>

int main()
{
    /*int i, j;
    int n;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for(j = 1; j <= i - 1; j++){
            printf(" ");
        }
        for(j = 1; j <= n - i + 1; j++){
            printf("*");
        }
        printf("\n");
    }*/


    int i, j, n;



    char c = 'A';

    int k = 0;



    printf("숫자 입력 : ");



    scanf("%d", &n);



    for (i = 1; i <= n; i++) {



        for (j = 1; j <= n - i; j++) {



            printf("%c ", c++);



        }



        for (j = 1; j <= i; j++) {



            printf("%d ", k++ % 10);



        }



        printf("\n");



    }



    return 0;





}