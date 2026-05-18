#include <stdio.h>

int main() {
	// your code goes here
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==8){
            printf("%d",i);
            count++;
            break;
        }
    }
    if(count==0) printf("-1");
    return 0;
}

