//sorting all zero's in last
#include <stdio.h>

int main(){
    int arr[]={5,0,2,0,0,4,1,3,0};
    int n=9;
    int ans[9];
    int index=0;
    
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            ans[index]=arr[i];
            index++;
        }
    }

    for(int i=index;i<n;i++){
        ans[index]=0;
        index++;
    }

    for(int i=0;i<n-1;i++){
        printf("%d ",ans[i]);
    }
    return 0;
}
