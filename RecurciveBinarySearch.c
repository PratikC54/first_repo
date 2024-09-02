#include<stdio.h>
int BinarySearch(int arr[],int l,int h,int x);
int main(){
    printf("enter the number of element to be entered::");
    int n;
    scanf("%d,&n");
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int x;
    printf("Enter a number to search it's index::");
    scanf("%d",&x);
   
    int b = BinarySearch(arr,0,n,x);
    if(b = -1) printf("Entered number not found.");
    else printf("Enterd number's Index is ::%d",b);
    return 0;
}
int BinarySearch(int arr[],int l,int h,int x){
     int mid;
    mid = (l+h)/2;
    if(arr[mid] == x) return mid;
    if(arr[mid]>x) return BinarySearch(arr,l,mid-1,x);
    if(arr[mid]<x) return BinarySearch(arr,mid+1,l,x);
    
    return -1;
}