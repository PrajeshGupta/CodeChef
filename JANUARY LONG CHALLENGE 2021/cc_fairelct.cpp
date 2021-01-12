#include <bits/stdc++.h>

#define ll long long
#define foi(n)  for(ll i=0;i<n;i++)
#define foj(n)  for(ll j=0;j<n;j++)

using namespace std;


int main() {
	ll test;
	cin>>test;
	while(test--){
	    ll n,m;
	    cin>>n>>m;
	    ll arr[n],brr[m],suma=0,sumb=0;
	    foi(n){
	        cin>>arr[i];
	        suma+=arr[i];
	    }
	    foj(m){
	        cin>>brr[j];
	        sumb+=brr[j];
	    }
	    
	    sort(arr,arr+n);
	    sort(brr,brr+m);
	    
	    if(suma>sumb)
	        cout<<"0"<<endl;
	    
	    else if(suma<=sumb){
	        ll count=0,x=0,y=m-1;
	        while(suma<=sumb){
	            suma=0,sumb=0;
	            if(arr[x]<brr[y]){
	                int temp=0;
	                temp=arr[x];
	                arr[x]=brr[y];
	                brr[y]=temp;
	                x++;
	                y--;
	            }
	            else{
	                count=-1;
	                break;
	            }
	            foi(n)
	                suma+=arr[i];
	            foj(m)
	                sumb+=brr[j];
	            count++;
	            
	            //cout<<suma<<"\t"<<sumb<<endl;
	        }
	        cout<<count<<endl;
	    }
	    else{
	        cout<<"-1"<<endl;
	    }
	    
	    
	}
	return 0;
}
