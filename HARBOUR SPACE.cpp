#include<iostream>
#define ll long long int
using namespace std;
int main(){
int n;
cin >>n;
for(int i=1;i<=n;i++){
	ll a,b;
	ll sum=0;
	cin >>a >>b;
	while(a>0){
	
		
		if(a%b==0){
			a=a/b;
			sum++;
		}
		else{
			ll r=a%b;
			a =a-r;
			sum =sum +r;
			
		}
		
	}
	cout << sum <<endl;
}
	return 0;
}
