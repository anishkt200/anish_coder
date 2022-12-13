#include <bits/stdc++.h>
using namespace std;
int main(){
	
string s1,s2;
cin >>s1 >>s2 ;
int a=0;
int l1=s1.length();
	for(int i=0;i<l1;i++){
	if(s1[i]==s2[l1-i-1]){
		a++;
	}
	

	}
	if(a==l1){
		cout <<"YES"<<endl;
	}	
	else{
		cout <<"NO" <<endl;
	}

	return 0;
}
