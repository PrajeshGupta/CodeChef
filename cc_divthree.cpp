#include <bits/stdc++.h>

#define ll long long
#define foi(n)  for(ll i=0;i<n;i++)
using namespace std;

int main() {
    ll t;
    cin>>t;
    while(t--){
        ll n,k,d;
        cin>>n>>k>>d;
        ll int arr[n],sum=0;
        foi(n){
            cin>>arr[i];
            sum+=arr[i];
        }
        ll res= sum/k;
        if(res<d)
            cout<<res<<endl;
        else
            cout<<d<<endl;
    }
    return 0;
}
