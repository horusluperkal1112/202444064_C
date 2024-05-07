#include <stdio.h>

int main(){
    int a;
    int b=0;
    int c = 0;
    scanf("%d", &a);
    while(b <= a){  
        if(a%2 == 0){
            c += b;
        }
        a++;

    }
    printf("%d", c);
    return 0;
}