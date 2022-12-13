#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	long N;
cin >>t;
for(int i=1;i<=t;i++){
	cin >>N;
	int sum=0;
	if(N>=1 && N<=9){n
		cout << N <<endl;
	}
	else{
		sum= sum+ N%10;
	
	while(N>=9){
		N=N/10;
	}
	sum=sum +N;
	cout << sum <<endl;
}
}

	return 0;
}
