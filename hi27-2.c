#include <stdio.h>

int main(){
    int a;
    int b = 1;
    scanf("%d", &a);
    while(b<=a){
        printf("%d ",b);
        b++;
    }
    return 0;
}