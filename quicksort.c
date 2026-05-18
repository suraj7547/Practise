#include <stdio.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int partition(int arr[],int low,int high){
   int pivot=arr[high];
   int i=low-1;
   for(int j=low;j<high;j++){
       if(arr[j]<pivot){
           i++;
           swap(&arr[i],&arr[j]);
       }
   }
   swap(&arr[high],&arr[i+1]);
   return i+1;
    
}
void quicksort(int arr[],int low,int high){
    if(low<high){
        int pos=partition(arr,low,high);
        quicksort(arr,low,pos-1);
        quicksort(arr,pos+1,high);
    }
}
int main(){
    int arr[]={5,3,4,7,8,9};
    int n=6;
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++)printf("%d ",arr[i]);
    return 0;
}
