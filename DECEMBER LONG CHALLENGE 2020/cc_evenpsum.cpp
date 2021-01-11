#include <iostream>

using namespace std;

int main() {
	long long int t,a,b,i,j,odd1,even1,odd2,even2;
	cin>>t;
	while(t--){
	    long long int flag=0;
	    cin>>a>>b;
	    if(a%2==1){
	        odd1=a/2 + 1;
	        even1=a-odd1;
	    }
   	    else{
	        odd1=a/2;
	        even1=a-odd1;
	    }
	    
	    if(b%2==1){
	        odd2=b/2 + 1;
	        even2=b-odd2;
	    }
	    else{
	        odd2=b/2;
	        even2=b-odd2;
	    }
	    flag=(odd1*odd2)+(even1*even2);
	    cout<<flag<<endl;
	}
	return 0;
}