#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here

	int t,n;
//	cin >>t;
//	for(int i=1;i<=t;i++){
		
	cin >>n;
//	int j=n-1;

	for(int j=n-1 ;j>=1;j--){
		int sum=0;
		for(int i=2;i<j;i++){
			if(j%i==0 ){
				sum++; 
				
			}
		
		}
		if(sum==0){
			cout <<j <<" ";
		}
		
	}
//	}
	return 0;
}
