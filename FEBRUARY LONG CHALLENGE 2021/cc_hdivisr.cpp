#include <bits/stdc++.h>

#define ll long long
#define foi(n)  for(ll i=0;i<n;i++)
#define foj(n)  for(ll j=0;j<n;j++)

using namespace std;

int main() {
	ll number,max=0;
	cin>>number;
	foi(10){
	    if(number % (i + 1)==0){
	        max=(i + 1);
	    }
	}
	cout<<max;
	return 0;
}
