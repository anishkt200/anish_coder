#include<iostream>
#define ll long long int
using namespace std;
int main(){
	ll t;
	cin >>t;
	ll array[t+2];

	array[0]=INT_MIN;
	array[t+1]==INT_MAX;
	for(ll i=1;i<=t;i++){
		cin >>array[i];
		
	}
	for(ll j=1;j<=t;j++){
	ll max1=array[t]-array[j];
	ll max2 =array[j]-array[1];
	ll min1 =array[j]-array[j-1];
	ll min2 =array[j+1]-array[j];
	ll max,min;
	if(max1>=max2){
		max=max1;
	}
	else{
		max=max2;
	}
	if(min1 >=min2){
		min=min2;
	}
	else{
		min =min1;
	}
	cout <<min <<" "<<max <<endl;
	}
	return 0;
}
