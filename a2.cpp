#include<iostream>
//# define long long int l1;
using namespace std;
int main(){
	long long int t,a,b,k;
	cin >>t ;
	for(int i=1;i<=t;i++){
		cin >>a >>b >>k;
		long long int sum =0;
		long long int n =0;
	while(sum <k ){
		if(sum % 2==0){
		
		n=n+a;
		sum++;
	}
	else{
		n=n-b;
		sum ++;
	}
	}
	cout <<n <<endl;
	}
	return 0;
}
