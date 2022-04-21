#include<bits/stdc++.h>
using namespace std;

void merge(int *arr,int low,int mid,int high){
    int n1 = mid-low+1;
    int n2 = high - mid;

    int a[n1],b[n2];

    for(int i=0;i<n1;i++){
        a[i] = arr[low+i];
    }
    for(int i=0;i<n2;i++){
        b[i] = arr[mid+1+i];
    }

    int p1=0,p2=0,k=low;

    while(p1<n1 && p2<n2){
        if(a[p1]<=b[p2]){
            arr[k] = a[p1];
            p1++;
        }else{
            arr[k] = b[p2];
            p2++;
        }

        k++;
    }

    while(p1<n1){
        arr[k] = a[p1];
        p1++;
        k++;
    }
    while(p2<n2){
        arr[k] = b[p2];
        p2++;
        k++;
    }
}

void mergeSort(int *arr,int low,int high){
    if(low<high){
        int mid = low+(high-low)/2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);

        merge(arr,low,mid,high);
    }

    return;
}

int main()
{
    int arr[] = { 9, 3, 4, 2, 1, 8 };
    int n = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}