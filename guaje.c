#include <stdio.h>

int main()
{
    int a, b;
   
    printf("두 개의 정수를 입력하세요.");
    scanf("%d %d", &a, &b);

    printf("%d와 %d의 공약수 : ", a, b);

    for( int c = 1; c <= a && c <= b; c++ ){
        if( a % c  == 0 && b % c == 0){
            printf("%d ", c);
        }
}
    return 0;
}