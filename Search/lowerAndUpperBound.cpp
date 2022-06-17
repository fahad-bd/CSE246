#include<bits/stdc++.h>
using namespace std;

int lower_bound(int arr[], int key, int size){
    int low=0, high=size-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==key){
            
        }
        else if(arr[mid]<key){
            low=mid+1;
        }
        else{
            high=mid;
        }
    }
    
    return low;
}

int upperBound(int arr[], int size, int key){
    int low=0, high=size-1, flag=0;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>key){
            
        }
    }
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