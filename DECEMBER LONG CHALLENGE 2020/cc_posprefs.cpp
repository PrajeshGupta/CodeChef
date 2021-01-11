#include <iostream>
using namespace std;

int main() {
	int t,j;
	cin>>t;
	while(t--){
	    int n,k,i,sum=0;
	    cin>>n>>k;
	    int arr[n+1];
	    for(i=1;i<=n;){
	        if(k==0 || k==n)
	            break;
	        if(sum+i<=i+1 && k>0){
	            arr[i]=i;
	            sum+=i;
	            i++;
	            k--;
	            continue;
	        }
	        if(sum>i){
	            arr[i]=-i;
	            sum-=i;
	            i++;
	            if(sum>0)
	                k--;
	            continue;
	        }
	        if(sum+i>=i+1 && k==1){
	            arr[i]=-i;
	            i++;
	            if(sum-i>0)
	                break;
	            else{
	                sum-=i;
	                continue;
	            }
	        }
	        if(sum+i>=i+1 && k>1){
	            arr[i]=i;
	            if(sum>0)
	                k--;
	            sum+=i;
	            i++;
	        }
	    }
	    if(k==n){
	        for(i=1;i<=n;i++){
	            arr[i]=i;
	        }
	    }
	    else if(i<=n){
	        for(;i<=n;i++){
	            arr[i]=-i;
	        }
	    }
	    
	    for(i=1;i<=n;i++){
	        cout << arr[i] <<" ";
	    }
	    cout << endl;
	}
	return 0;
}
