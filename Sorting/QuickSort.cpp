#include<bits/stdc++.h>
using namespace std;

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int *arr,int low,int high){
    int pivot = arr[low];
    int i = low,j = high;

    while(i<j){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }

        if(i<j){
            swap(&arr[i],&arr[j]);
        }
    }

    swap(&arr[low],&arr[j]);

    return j;
}

void quickSort(int *arr,int low,int high){
    if(low<=high){
        int pi = partition(arr,low,high);

        quickSort(arr,low,pi-1);
        quickSort(arr,pi+1,high);
    }

    return;
}

int main()
{
    int arr[] = { 9, 3, 4, 2, 1, 8 };
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}