#include <bits/stdc++.h>
#define foi(n)  for(int i=0;i<n;i++)
using namespace std;

int main() {
	int t,n,d;
	cin>>t;                         //input for the number of test cases 
	while(t--){                     //loop will run the test cases
	    cin>>n>>d;
	    int arr[n];
	    foi(n){
	        cin>>arr[i];
	    }
	    int j=0,k=0,brr[n],crr[n];
	    for(int i=0;i<n;i++){
	        if(arr[i]<=9 || arr[i]>=80){
	            brr[j++]=arr[i];
	        }
	        else{
	            crr[k++]=arr[i];
	        }
	    }
	    int x,y;
	    if(j%d==0){
	        x=j/d;
	    }
	    else{
	        x=j/d + 1;
	    }
	    if(k%d==0){
	        y=k/d;
	    }
	    else{
	        y=k/d + 1;
	    }
	    cout << (x+y) <<endl;
	}
	return 0;
}
