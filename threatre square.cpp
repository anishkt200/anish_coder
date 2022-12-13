#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int n,m,a,t,b;
	
	cin >>n >>m >>a;
	if(a>=1 ){
	
	if(n%a !=0){
		t= (n/a)+1;
	}
	if(n%a ==0){
		t =(n/a);
		
	}
		if(m%a !=0){
		b= (m/a)+1;
	}
	if(m%a ==0){
		b =(m/a);
		
	}
	
}

	
	cout << (t*b) <<endl;
	return 0;
}
