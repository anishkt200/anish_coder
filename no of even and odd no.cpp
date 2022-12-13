#include <bits/stdc++.h>
using namespace std;
int main(){
int t,n,f;
int e=0;
int o=0;
cin >>t;
for(int i=1;i<=t;i++){
	cin>> n;
	if(n%2==0){
		e++;
	}
	else{
		o++;
		
	}
	
}
f =e -o;
if(f>=0){
	cout << f <<endl;
}
else{
	cout <<(-f) <<endl;
}

	return 0;
}
