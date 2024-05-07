#include <stdio.h>

int main()
{
    
    int jumsu;
    char grade;
    printf("점수를 입력하세요. 100~0 범위가 아닐 시 자동으로 F 값이 출력됩니다.");
    scanf("%d", &jumsu);

    switch(jumsu/10)
    {
        case 10:
        case 9:        
         grade = 'A';
         break;

        case 8:        
         grade = 'B';
         break;

        case 7:        
         grade = 'C';
         break;

        case 6:        
         grade = 'D';
         break;

        default :       
         grade = 'F';
         break;


    }
    printf("%c", grade);
    return 0;
}