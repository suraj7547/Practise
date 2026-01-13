// #include <stdio.h>

// int main(){
//     char arr[] = "suraj\0";
//     int i =0;
//     while(arr[i]!='\0'){
//         printf("%c ",arr[i]);
//         i++;
//     }
//     return 0;

// }

#include <stdio.h>

int main(){
    char arr[] = {'a','b','c','d','e','\0'};
    int i = 0;
    while(arr[i]!='\0'){
        printf("%c ",arr[i]);
        i++;
    }
    return 0;
}
