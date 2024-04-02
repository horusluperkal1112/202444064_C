#include <stdio.h>

int main()
{
    int a, b, gop;
    printf("단을 입력하시오");
    scanf("%d", &a);
    for(a>=1; a<10; a++)
    {   for(b>1; b<10; b++)
        {
            gop = a * b;
            printf("%d * %d = %d\n", a, b, gop);
        }
    
    }
}