#include <bits/stdc++.h>
using namespace std;


float rou(float var)
{
    // 37.66666 * 100 =3766.66
    // 3766.66 + .5 =3767.16    for rounding off value
    // then type cast to int so value is 3767
    // then divided by 100 so the value converted into 37.67
    float value = (int)(var * 100 + .5);
    return (float)value / 100;
}

int main() {
    int t;
    cin>>t;
    float target = 9.58;
    while(t--){    
    	float k1,k2,k3,v;
    	cin>>k1>>k2>>k3>>v;
    	float base = k1*k2*k3*v;
    	base = 100/base;
    	base = rou(base);
    	if(base<target) cout<<"YES"<<endl;
    	else cout<<"NO"<<endl;
    }
	return 0;
}
