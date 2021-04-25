#include <bits/stdc++.h>

#define ll long long int
#define foi(n)  for(ll i=0;i<n;i++)
#define foj(n)  for(ll j=0;j<n;j++)

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
	ll test;
	cin>>test;
	while(test--){
	    ll n,m,k;
	    cin>>n>>m>>k;
	    vector<ll> g(n+1);
	    foi(n){
	        cin>>g[i+1];
	    }
	    vector<vector<pair<ll,ll>>> arr(n+1),dp(n+1);
	    foi(m){
	        ll u,v,d;
	        cin>>u>>v>>d;
	        arr[u].push_back(make_pair(i,d));
	        arr[v].push_back(make_pair(i,d));
	    }
	    dp[0].push_back(make_pair(0,0));
	    for(ll i=1;i<=n;i++){
	        vector<pair<ll,ll>> temp;
	        temp.insert(temp.end(),dp[i-1].begin(),dp[i-1].end());
	        ll cur=0,mask=0;
	        set<ll> open;
	        for(ll j=i;j>=1;j--){
	            
	            cur+=g[j];
	            mask^=1LL<<j;
	            for(auto xyz:arr[j]){
	                if(open.count(xyz.first)){
	                    cur+=xyz.second;
	                }
	                else{
	                    open.insert(xyz.first);
	                }
	            }
	            if(j>1){
	                for(auto xyzj:dp[j-2]){
	                    temp.push_back(make_pair(xyzj.first+cur,mask^xyzj.second));
	                }
	            }
	            else{
	                temp.push_back(make_pair(cur,mask));
	            }
	        }
	        sort(temp.begin(),temp.end());
	        reverse(temp.begin(),temp.end());
	        set<ll> sel;
	        ll filled = 0;
	        for(ll j=0;j<temp.size() && filled<k;j++){
	            if(sel.count(temp[j].second))
	            continue;
	            dp[i].push_back(temp[j]);
	            filled++;
	            sel.insert(temp[j].second);
	        }
	    }
	    foi(k){
	       cout<<dp[n][i].first<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
