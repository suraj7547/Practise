#include<stdio.h>

void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
    int arr[]={5,2,1,3,4};
    int k=3;
    int n=5;
    for(int i=0;i<=k-1;i++){ //we used k-1 instead of n-1 to reduce the time complexity
        int j=i;
        while(j>0 && arr[j]>arr[j-1]){
            swap(&arr[j],&arr[j-1]);
            j--;
        }
    }

    printf("The K[%d] element is %d",k,arr[k]);
    return 0;
}
