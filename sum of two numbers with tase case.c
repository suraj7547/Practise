#include <stdio.h>

void sum(int a,int b){
    printf("%d\n",a+b);
}

int main(){
    int t;
    int num1;
    int num2;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&num1,&num2);
        sum(num1,num2);
    }
    return 0;
}
