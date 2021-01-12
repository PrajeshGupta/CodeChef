#include <bits/stdc++.h>

#define ll long long
#define foi(n)  for(ll i=0;i<n;i++)
#define foj(n)  for(ll j=0;j<n;j++)

using namespace std;

int main(){
	ll test;
	cin>>test;
	while(test--){
	    ll n,k,x,y;
	    cin>>n>>k>>x>>y;
	    k=k%4;
	    if(x==y){
	        x=n;
	        y=n;
	    }
	    else if(x>y){
	        switch(k){
	            case 0:x=x-y;
	                   y=0;
	                   break;
	            case 1:y=n-x+y;
	                   x=n;
	                   break;
	            case 2:y=n-x+y;
	                   x=n;
	                   x=x+y;
	                   y=x-y;
	                   x=x-y;
	                   break;
	            case 3:x=x-y;
	                   y=0;
	                   x=x+y;
	                   y=x-y;
	                   x=x-y;
	                   break;
	        }
	    }
	    else{
	        switch(k){
	            case 0:y=y-x;
	                   x=0;
	                   break;
	            case 1:x=n-y+x;
	                   y=n;
	                   break;
	            case 2:x=n-y+x;
	                   y=n;
	                   x=x+y;
	                   y=x-y;
	                   x=x-y;
	                   break;
	            case 3:y=y-x;
	                   x=0;
	                   x=x+y;
	                   y=x-y;
	                   x=x-y;
	                   break;
	        }
	    }
	    cout<<x<<" "<<y<<endl;
	    
	    
	}
	return 0;
}
