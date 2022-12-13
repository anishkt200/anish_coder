#include<iostream>
using namespace std;
int main(){
	long t,n;
	cin >>t;
	for(long i=1;i<=t;i++){
		cin >>n;
		if(n%2==0){
			cout <<"BOB"<<endl;
		}
		else{
			cout <<"ALICE"<<endl;
		}
	}
	return 0;
}
