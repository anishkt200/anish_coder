#include<bits/stdc++.h>
using namespace std;

 long long int fact(int n){

long long int p=1;
 	for(long long int i=1;i<=n;i++){
 	p=p*i;	
	 }
	 return p;
 }
 
int main(){
	int t,n,k;

	cin >>t;
	for(int i=1;i<=t;i++){
	cin >> n >>k;
	if(n<=(k-1)){
		cout <<"0" <<endl;
	}
	else{
		int a=n-k;
		long long int b=(fact((a+k-1)))/(fact(a)*fact(k-1));
		cout << b <<endl;
	}
	
	}
	cout <<fact(30);
	return 0;
}
