#include<bits/stdc++.h>
using namespace std;

int lower_bound(int arr[], int key, int size){
    int high = size-1, low=0;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]<key){
            low=mid+1;
        }
        else{
            high=mid;
        }
    }
    if(arr[low]<=key){
        return low;
    }
    if(arr[high]<=key){
        return high;
    }
    return 0;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<lower_bound(arr,key,n)<<endl;
    return 0;
}