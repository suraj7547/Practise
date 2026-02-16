#include <stdio.h>
void swap(int *a,int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
}

//bubblesort
// void bubblesort(int arr[],int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-1;j++){
//             if(arr[j]>arr[j+1])
//             swap(&arr[j],&arr[j+1]);
//         }
//     }
// }

//insertionsort
// void insertionsort(int arr[],int n){
//     for(int i=1;i<n;i++){
//         int temp=arr[i];
//         int j=i-1;
//         while(j>=0 && arr[j]>temp){
//             arr[j+1]=arr[j];
//             j--;
//         }
//         arr[j+1]=temp;
//     }
// }

//shellsort
// void shellsort(int arr[],int n){
//     for(int gap=n/2;gap>0;gap/=2){
//         for(int i=gap;i<n;i++){
//             int temp=arr[i];
//             int j;
//             for(j=i;j>=gap && arr[j-gap]>temp;j-=gap){
//                 arr[j]=arr[j-gap];
//             }
//             arr[j]=temp;
//         }
//     }
// }

//quicksort

int main(){
    int arr[]={7,8,4,2,3,9,1};
    int n=7;
    quicksort(arr,n);
    // shellsort(arr,n);
    // insertionsort(arr,n);
    for(int i=0;i<n;i++) printf("%d ",arr[i]);    
    return 0;
}
