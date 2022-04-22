// maximum sum of subArray

#include<bits/stdc++.h>
using namespace std;

int maxSumSubArray(int *arr, int n){
    int curr = 0;
    int max_till_now = 0;

    for(int i=0;i<n;i++){
        curr = curr + arr[i];
        max_till_now = max(max_till_now,curr);

        if(curr<0)
            curr = 0;
    }

    return max_till_now;
}

int main()
{
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(arr)/sizeof(arr[0]);

    int res = maxSumSubArray(arr,n);
    cout<<res;
    return 0;
}