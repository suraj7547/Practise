#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
int result;
    // Loop for each test case
    while (t--) {
        int x, y;

      
        scanf("%d %d", &x, &y);
        result=x+y;
        if(result>6) printf("YES\n");
        if(result<=6)printf("NO\n");
        // Your code for each test case goes here 
    }
}
