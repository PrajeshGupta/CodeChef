#include <bits/stdc++.h>

#define ll long long
#define foi(n)  for(ll i=0;i<n;i++)
#define foj(n)  for(ll j=0;j<n;j++)

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
	ll test;
	cin>>test;
	while(test--){
	    ll number_of_dice;
	    cin>>number_of_dice;
	    ll max_sum=0;
	    max_sum=(number_of_dice/4)*44;
	    int remain=(number_of_dice%4);
	    
	    if(number_of_dice>=4){              //the first layer is covered or more dice than that in first layer
	        if(remain==0){
	            max_sum+=16;
	        }
	        else if(remain==1){
	            max_sum+=32;
	        }
	        else if(remain==2){
	            max_sum+=44;
	        }
	        else{
	            max_sum+=55;
	        }
	        cout<<max_sum<<endl;
	    }    
	    else{                               //the first layer dosent completely has all dices intact
	        if(remain==1){                  //for single dice (2+3+4+5+6=20)
	            max_sum+=20;        
	        }
	        else if(remain==2){             //for two dices (3+4+5+6)*2=36
	            max_sum+=36;
	        }
	        else if(remain==3){             //for three dices (3+4+5+6)*2 + (4+5+6) = 51
	            max_sum+=51;
	        }
	        cout<<max_sum<<endl;
	    }
	}
	return 0;
}
