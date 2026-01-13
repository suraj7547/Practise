#include <Stdio.h>
#include <string.h>

int main(){
    char str[20];
    // scanf("%[^\n]s",str); // fisrt way
    gets(str); // second method but only works if we use <string.h>
    // printf("%s",str); first way to print a string
    puts(str); //second way to print a string but you have to use <string.h>

    return 0;
}
