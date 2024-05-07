#include <stdio.h>

int chonghap(int n);

int main(){
    int a;
    scanf("%d", &a);
    chonghap(a);
}

int chonghap(int n){
    if(n==1){
        return 1;
    }
    else{
        return n + chonghap(n-1);
    }
}