#include <bits/stdc++.h>

#define ll long long
#define foi(n)  for(ll i=0;i<n;i++)
#define foj(n)  for(ll j=0;j<n;j++)

using namespace std;

int main() {
	ll test;
	cin>>test;
	while(test--){
	    ll size;
	    cin>>size;
	    ll a[size];
	    foi(size){
	        cin>>a[i];
	    }
	    sort(a,a+size);
	    ll max=abs(a[0]-a[1])+abs(a[1]-a[size-1])+abs(a[size-1]-a[0]);
	    cout<<max<<endl;
	}
	return 0;
}
