#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> s;
    for(int i=0;i<3;i++){
        int x;
        cin>>x;
        s.insert(x);
    }
    if(s.size()<3) cout<<"YES";
    else cout<<"NO";
	return 0;
}
