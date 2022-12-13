#include<bits/stdc++.h>
using namespace std;
int main(){
	long n;
	int k;
	cin >>n >>k;
//	long q
	for(int i=1;i<=k;i++){
		if(n%10 ==0){
		n =n/10	;
			
		}
		else{
			n--;
		}
	}
	cout << n;
	return 0;
	
	
}
