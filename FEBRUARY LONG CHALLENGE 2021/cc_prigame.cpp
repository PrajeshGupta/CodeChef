#include <bits/stdc++.h>

#define ll long long
#define foi(n)  for(ll i=0;i<n;i++)
#define foj(n)  for(ll j=0;j<n;j++)

using namespace std;

int check_prime(ll x){
    int check=0;
    if (x == 0 || x == 1) {
        check = 1;
    }
    else {
        for (int i = 2; i <= x / 2; ++i) {
            if (x % i == 0) {
                check = 1;
                break;
            }
        }
    }
    return check;
}

int main() {
	ll test;
	cin>>test;
	while(test--){
	    ll x,y,m,count=0;
	    int c;
	    cin>>x>>y;
	    for(ll i=2;i<=x;i++){
	        c=check_prime(i);
	        if(c==0) count++;
	    }
	    if(count>y) cout<<"Divyam"<<endl;
	    else cout<<"Chef"<<endl;
	}
	return 0;
}
