#include <stdio.h>

int print_reverse(int n);

int main(){
    int num;
    scanf("%d", &num);
    print_reverse(num);
}

int print_reverse(int n){       //성공? 혹은 끼워맞추기 성공?
    if(1<=n){
        printf("%d\n",n);
        return(print_reverse(n-1));
    }
}