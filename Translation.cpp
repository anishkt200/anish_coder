#include <bits/stdc++.h>
using namespace std;
int main(){
	
	string s1,s2;
	cin >> s1 >>s2;

string s3;
	for(int i=0;i<s1.length();i++){
		s3[i]=s1[(s1.length()-i-1)];
		
	
	}
	cout <<s3 <<endl;
	if(s2 != s3){
	cout <<"NO" <<endl;
	}
	else{
	cout <<"YES"<<endl;
	}
	
	
	return 0;
}
