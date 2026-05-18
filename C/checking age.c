#include <stdio.h>

int main() {
    int t;

    // Input for the number of test cases using scanf
    scanf("%d", &t);

    // Loop for each test case
    while (t--) {
        int x, y, a;
        scanf("%d %d %d", &x, &y, &a);
        if(x<=a && y>a) printf("YES\n");
        else printf("NO\n");
        // Your code for each test case goes here 
    }
    return 0;
   
}
