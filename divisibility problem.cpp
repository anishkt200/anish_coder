#include <bits/stdc++.h>
using namespace std;

int main(){
	long t;
	cin >>t;
	long a;
	
	long b;
	for(long i=1;i<=t;i++){
	cin >>a >>b;
	if( a%b ==0){
		cout << "0";
		
	}
	else{
		cout << b -(a%b);
	}
		}
	

	
	return 0;
	
}
