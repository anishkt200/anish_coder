#include <bits/stdc++.h>
#include<cmath>
using namespace std;
int main(){
	int t,n;
cin >>t;
int array[6]={1,2,5,10,50,100};
for(int i=1;i <=t;i++){
	int sum=0;
	
	cin >> n;
	for(int j=5;j>=0;j--){
		if(n % array[j]==0){
			sum=sum+ n/(array[j]);
			n=0;
		}
		else{
			if(n%array[j]!=n){
					sum=sum+ n/array[j];
					n=n-(array[j]*(n/array[j]));
			}
		}
	}
	cout << sum <<endl;
}
	return 0;
}
