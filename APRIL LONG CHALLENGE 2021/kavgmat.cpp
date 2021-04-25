#include <bits/stdc++.h>

#define ll long long
#define foi(n)  for(ll i=0;i<n;i++)
#define foj(n)  for(ll j=0;j<n;j++)

using namespace std;

ll min(ll a, ll b){
    if(a<b){
        return a;
    }
    return b;
}

int main() {
    
    ios_base::sync_with_stdio(false);
    
	ll test;
	cin>>test;
	while(test--){
	    ll m,n,k;
        cin>>n>>m>>k;
        
        double a[n+1][m+1];
        for(ll i=0;i<=n;i++){
            for(ll j=0;j<=m;j++){
                if(i==0 || j==0){
                    a[i][j]=0;
                }
                else{
                    cin>>a[i][j];
                }
            }
        }
        
        for(ll i=0;i<=n;i++){
            double pre =0;
            for(ll j=0;j<=m;j++){
                a[i][j]+=pre;
                pre = a[i][j];
            }
        }
        
        for(ll j=0;j<=m;j++){
            double pre =0;
            for(ll i=0;i<=n;i++){
                a[i][j]+=pre;
                pre = a[i][j];
            }
        }
        ll z = min(n,m);
        ll ans = 0;
        for(ll len=1;len<=z;len++){
            for(ll i=len;i<=n;i++){
                for(ll j=len;j<=m;j++){
                    if((a[i][j]+a[i-len][j-len] - a[i][j-len] - a[i-len][j])/(len*len)>=k){
                        ans++;
                    }
                }
            }
        }
        cout<<ans<<endl;
        
	}
	return 0;
}
