#include<bits/stdc++.h>
using namespace std;
int main()
{
   /* int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    */
    int arr[]={1,2,3,4,5,6,7,8,9};
    int low = 0;
    int high = 8;
    int key = 2;
    while(low<=high){
        int mid = (low+high+1)/2;
        if(arr[mid]==key){
            cout<<mid<<endl;
            break;
        }
        else if(arr[mid]>key){
            high=mid;
        }
        else{
            low=mid+1;
        }
    }
    return 0;
}