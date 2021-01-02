#include <bits/stdc++.h>

#define S  {
#define ll long long
#define foi(n)  for(ll i=0;i<n;i++)
#define foj(n)  for(ll j=0;j<n;j++)
using namespace std;

int main() {
	ll t;
    char arr[16]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p'};
	cin>>t;
	while(t--){
	    string str;
	    cin>>str;
	    int part = str.length()/4;
	    foj(part){
	        int low=0,high=15,mid,check;
	        foi(4){
	            mid=(low+high)/2;
	            if(str[i]=='0'){
	                high=mid;
	                check=high;
	            }
	            else{
	                low=mid+1;
	                check=low;
	            }
	        }
	        cout<<arr[check];
	    }
	    cout<<endl;
	}
	return 0;
}
