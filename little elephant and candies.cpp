#include <bits/stdc++.h>

using namespace std;
int main(){
	int t,n,c;
cin >>t;

for(int i=1;i <=t;i++){
	cin >>n >>c ;
	int array[n];
	int sum=0;
	for(int j=1;j<=n;j++){
		cin >>array[j];
		sum =sum+array[j];
	}
	if(sum<=c){
		cout <<"YES"<<endl;
	}
	else{
		cout <<"NO"<<endl;
	}
}
	return 0;
}
