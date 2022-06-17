#include<bits/stdc++.h>
using namespace std;
/*int main()
{
    double n;
    cin>>n;
    double low = 1, high = n,precision=0.00001;
    while(high-low>precision){
        double mid=(low+high)/2;
        if(mid*mid<n){
            low=mid;
        }
        else{
            high=mid;
        }
    }
    cout<<high<<endl;
    return 0;
}*/

int main()
{
    double n;
    cin>>n;
    double low=1, high=n, precision=0.00001;
    while(low<=high){
        double mid = (low+high)/2;
        double x = abs((mid*mid)-n);
        if(x<=precision){
            cout<<mid<<endl;
            break;
        }
        else if((mid*mid)>n){
            high=mid;
        }
        else{
            low=mid;
        }
    }
    return 0;
}
