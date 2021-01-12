#include <bits/stdc++.h>

#define ll long long
#define foi(n)  for(ll i=0;i<n;i++)
#define foj(n)  for(ll j=0;j<n;j++)

using namespace std;

int main() {
	ll test;
	cin>>test;
	while(test--){
	    ll n,m,rest;
	    cin>>n>>m;
	    ll arr[n],brr[m];
	    set<ll> s;
	    foi(n)
	        cin>>arr[i];
	    foj(m)
	        cin>>brr[j];
	    foi(n-1){
	        for(ll j=i+1;j<=n-1;j++){
	            ll x=0;
	            x=x|arr[i];
	            s.insert(x);
	            x=arr[i]|arr[j];
	            s.insert(x);
	        }
	    }
	    rest=0|arr[n-1];
	    s.insert(rest);
	    foi(m-1){
	        for(ll j=i+1;j<=m-1;j++){
	            ll y=0;
	            y=y&brr[i];
	            s.insert(y);
	            y=brr[i]&brr[j];
	            s.insert(y);
	        }
	    }
	    rest=0&brr[m-1];
	    s.insert(rest);
	
	    cout<<s.size()<<endl;
	}
	
	return 0;
}
