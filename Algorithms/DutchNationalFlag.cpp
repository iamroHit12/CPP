// sort 0 1 2 array

#include<bits/stdc++.h>
using namespace std;

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort012(int *arr,int n){
    int low = 0, mid = 0, high = n-1;

    while(mid<high){
        if(arr[mid] == 0){
            swap(&arr[low],&arr[mid]);
            mid++;
            low++;
        }
        if(arr[mid]==1)
            mid++;
        if(arr[mid] == 2){
            swap(&arr[mid],&arr[high]);
            high--;
        }
    }
}

int main()
{
    int arr[] = {1,1,2,0,0,1,2,2,1,0};
    int n = sizeof(arr)/sizeof(arr[0]);

    sort012(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}