#include <stdio.h>

int main(){
    while(1){
        int a, b;
        scanf("%d", &a);
        if(a!=0){
            if(a%2==0){
                
            }
            else{
                a+=a;
                b+=1;
            }

        }
        else if(a==0){
            break;
        }
        printf("%d", a);
    }
    return 0;
}
