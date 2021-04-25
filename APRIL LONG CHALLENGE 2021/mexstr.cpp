#include <bits/stdc++.h>

#define ll long long
#define foi(n)  for(ll i=0;i<n;i++)
#define foj(n)  for(ll j=0;j<n;j++)

using namespace std;
constexpr int MAXN = (int)1e6;

int dp[MAXN + 2], dp1[MAXN + 2];
int next0[MAXN], next1[MAXN];

void solve(){
    string s;
    cin>>s;
    int size = s.length();
    
    int last = -1;
    foi(size){
        if(s[i]=='0'){
            for(int j=last+1; j<=i;j++){
                next0[j] = i;
            }
            last = i;
        }
    }
    for(int i=last+1;i<size;i++){
        next0[i]=size;
    }
    if(next0[0]==size){
        cout<<"0\n";
        return;
    }
    
    last = -1;
    foi(size){
        if(s[i]=='1'){
            for(int j=last+1; j<=i;j++){
                next1[j] = i;
            }
            last = i;
        }
    }
    for(int i=last+1;i<size;i++){
        next1[i]=size;
    }
    
    dp[size]=dp[size+1]=0;
    dp1[size]=dp1[size+1]=0;
    
    for(int i=size-1;i>=0;--i){
        dp[i]=dp[i+1];
        if(s[i]=='0' && next1[i]<size){
            dp[i]=max(dp[i],dp[next1[i]+1]+1);
        }
        if(s[i]=='1' && next0[i]<size){
            dp[i]=max(dp[i],dp[next0[i]+1]+1);
        }
        dp1[i] = dp1[i+1];
        
        if(next1[i]<size){
            dp1[i]=max(dp1[i],dp[next1[i]+1]+1);
        }
    }
    
    int len = dp1[0] + 1;
    int current = next1[0] + 1;
    string res = "1";
    for(int i=1;i<len;i++){
        if(current>=size){
            res.push_back('0');
            continue;
        }
        if(next0[current]>=size){
            res.push_back('0');
            current = next0[current] + 1;
            continue;
        }
        
        if(dp[next0[current] + 1]<len-i-1){
            res.push_back('0');
            current = next0[current] + 1;
        }
        else{
            res.push_back('1');
            current = next1[current] + 1;
        }
    }
    
    cout<<res<<endl;
    
}

int main(int argc, char *argv[]) {
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	
	if(argc>1){
	    freopen(argv[1],"r",stdin);
	}
	if(argc>2){
	    freopen(argv[2],"w",stdout);
	}
	
	ll test;
	cin>>test;
	while(test--){
	    solve();
	}
	return 0;
}
