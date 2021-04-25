#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int length, target;
	    cin>>length>>target;
	    string str;
	    cin>>str;
	    int count=0,flag=0;
	    for(int i=0;i<str.size();i++){
	        if(str[i]=='*'){
	            count++;
	        }
	        else{
	            count = 0;
	        }
	        
	        if(count == target){
	            flag = 1;
	            break;
	        }
	    }
	    if(flag==1) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
	return 0;
}
