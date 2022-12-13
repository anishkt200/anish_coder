#include<iostream>
#include <vector>
#include <algorithm>
#define ll long long int
using namespace std;
int main(){
int n;
cin >>n;
for(int i=1;i<=n;i++){
	vector<ll> vect;
	ll a;
	for(int j=1;j<=3;j++){
		cin>> a;
		vect.push_back(a);
	}
	sort(vect.begin(),vect.end());
	if(vect[0] != vect[1] && vect[2] !=vect[1] && vect[0] != vect[2]){
		vect[0]++;
		vect[2]--;
	}
	else if(vect[0] == vect[1] && vect[2] == vect[1]+1){
		vect[2]--;
	}
	else	if( vect[2] ==vect[1] && vect[0]+1 < vect[2]){
		vect[0]++;
		vect[1]--;
		vect[2]--;
	
	}
	else	if(vect[0] == vect[1] && vect[2]  >vect[1]+1 ){
		vect[0]++;
		vect[2]--;
		vect[1]++;
	}
	else	if(vect[2] ==vect[1] && vect[0]+1 == vect[2]){
		vect[0]++;
		
}
	
//	cout <<vect[0] <<" "  <<vect[1] <<" "<<vect[2] <<endl;
	cout << 2*vect[2]-2*vect[0]<<endl ;
}
		return 0;
}
