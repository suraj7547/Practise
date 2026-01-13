#include <stdio.h>
#include <string.h>

int main(){
    char str[49];
    scanf("%[^\n]s",str);
    int size = 0;
    int i = 0;
    while(str[i]!='\0'){
        size++;
        i++;
        
    }
    printf("The size of the string is : %d",size);
    return 0;
}
