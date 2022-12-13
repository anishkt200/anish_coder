#include <bits/stdc++.h>

using namespace std;
int main(){
	int t,n;
cin >>t;


for(int i=1;i <=t;i++){
	cin >>n ;
	int b=n;
	int d=0;
	int sum=0;
	int c=0;
	while(b>=1 &&n>=1){
	
//	while(true){
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0){
				sum++;
				
			}
	}
		if(sum==0){
			//c=n;
			b=b-n;
			d++;
		}
		else{
			n--;
		
	}
	b=n;
	cout <<b <<endl;
	cout <<d <<endl;	
//	}
}
//cout <<d <<endl;
}
	return 0;
}
