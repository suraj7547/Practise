#include <stdio.h>
#include <string.h>


int main(){
    char str[] = "Hello World";
    char reversed[50];
    strcpy(reversed,str);
    int len = strlen(reversed);
    for(int i=0,j=len-1;i<=j;i++,j--){
        char temp = reversed[i];
        reversed[i]=reversed[j];
        reversed[j]=temp;
    }
    printf("The reversed string is : %s",reversed);

    return 0;
}
