#include <bits/stdc++.h>

#define ll long long
#define foi(n)  for(ll i=0;i<n;i++)
#define foj(n)  for(ll j=0;j<n;j++)

using namespace std;

int main() {
	ll test;
    cin>>test;
	while(test--){
	    string meet,stan;
	    cin>>meet>>stan;
	    ll tm;
	    int h=((meet[0]%48)*10 + meet[1]%48) , m=((meet[3]%48)*10 + meet[4]%48);
        if(stan[0]=='P'){
            if(h<12){
                tm=(12 + h)*100 + m;
            }
            else{
                tm=h*100 + m;
            }
        }
        else{
            if(h<12){
                tm=h*100 + m;
            }
            else{
                tm=(h-12)*100 + m;
            }
        }
	    ll no_of_friends;
	    cin>>no_of_friends;
	    string meet1,meet2,stan1,stan2;
	    ll tm1,tm2;
	    foi(no_of_friends){
	        cin>>meet1>>stan1>>meet2>>stan2;
	        int h1=((meet1[0]%48)*10 + meet1[1]%48) , m1=((meet1[3]%48)*10 + meet1[4]%48);
	        if(stan1[0]=='P'){
                if(h1<12){
                    tm1=(12 + h1)*100 + m1;
                }
                else{
                    tm1=h1*100 + m1;
                }
            }
            else{
                if(h1<12){
                    tm1=h1*100 + m1;
                }
                else{
                    tm1=(h1-12)*100 + m1;
                }
            }
	        
	        int h2=((meet2[0]%48)*10 + meet2[1]%48) , m2=((meet2[3]%48)*10 + meet2[4]%48);
	        if(stan2[0]=='P'){
                if(h2<12){
                    tm2=(12 + h2)*100 + m2;
                }
                else{
                    tm2=h2*100 + m2;
                }
            }
            else{
                if(h2<12){
                    tm2=h2*100 + m2;
                }
                else{
                    tm2=(h2-12)*100 + m2;
                }
            }
            if(tm1<=tm && tm2>=tm) cout<<"1";
            else cout<<"0";
            
            //cout<<setw(4)<<setfill('0')<<tm1<<" "<<tm<<" "<<tm2<<endl;
	    }
	    cout<<endl;
	}
	
	return 0;
}
