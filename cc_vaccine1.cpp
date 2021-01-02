#include <iostream>
using namespace std;

int main() {
	int day1,day2,vac1,vac2,totalvaccine,flag=0,sum=0,x;
	cin>>day1>>vac1>>day2>>vac2>>totalvaccine;
	if(day1==day2){
	    x=0;
	}
	else if(day1<day2){
	    x=1;
	}
	else{
	    x=2;
	}
	switch(x){
	    case 0:flag=day1;
	           sum=vac1+vac2; 
	           while(totalvaccine>sum){
	               sum+=(vac1+vac2);
	               flag++;
	           }
	           cout<<flag;
	           break;
	    case 1:flag=day1;
	           sum=vac1;
	           while((day2-day1) && totalvaccine>sum){
	               sum+=vac1;
	               flag++;
	           }
	           while(totalvaccine>sum){
	               sum+=(vac1+vac2);
	               flag++;
	           }
	           cout<<flag;
	           break;
	    case 2:flag=day2;
	           sum=vac2;
	           while((day1-day2) && totalvaccine>sum){
	               sum+=vac2;
	               flag++;
	           }
	           while(totalvaccine>sum){
	               sum+=(vac1+vac2);
	               flag++;
	           }
	           cout<<flag;
	}
	
	return 0;
}
