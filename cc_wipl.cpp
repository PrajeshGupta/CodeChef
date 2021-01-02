#include <bits/stdc++.h>

#define ll long long
#define foi(n)  for(ll i=0;i<n;i++)
#define foj(n)  for(ll j=0;j<n;j++)

using namespace std;

int main(){
	ll test;
	cin>>test;
	while(test--){
	    ll n,k,mike=0,tracy=0;
	    cin>>n>>k;
	    ll arr[n];
	    foi(n)
	        cin>>arr[i];
	    sort(arr,arr+n);
	    ll count=0;
	    mike=arr[n-1];
	    tracy=arr[n-2];
	    while(mike<k || tracy<k){
	        
	    }
	}
	return 0;
}
