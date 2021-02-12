#include <bits/stdc++.h>

#define ll long long
#define foi(n) for(ll i=0;i<n;i++)
#define foj(n) for(ll j=0;j<n;j++)
#define fok(n) for(ll k=n-1;k>=0;k--)


using namespace std;

bool is_there(map<ll,ll> &m, ll x){
    ll count=0;
    for(auto it:m){
        if(it.first<x && it.second<m[x]) count++;
    }
    return count==x-1;
}

ll check(vector<ll>w,vector<ll>j){
    map<ll,ll> m;
    map<ll,ll> step;
    foi(w.size()){
        m[w[i]]=i;
        step[w[i]]=j[i];
    }
    ll flag=0;
    sort(w.begin(),w.end());
    for(ll i=1;i<w.size();i++){
        while(!is_there(m,w[i])){
            flag++;
            m[w[i]]+=step[w[i]];
        }
    }
    return flag;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--){
        ll n,push;
        cin>>n;
	    vector<ll> wt,jump;
	    foi(n){
	        cin>>push;
	        wt.push_back(push);
	    }
	    foi(n){
	        cin>>push;
	        jump.push_back(push);
	    }
	    cout<<check(wt,jump)<<endl;
    }
    return 0;
}
