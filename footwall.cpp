#include <bits/stdc++.h>
using namespace std;
int main(){
	
string s1;
cin >>s1;
int l1 =s1.length();
int t=0;

for(int i=0;i<(l1-6);i++){
	if(s1[i]==s1[i+1] && s1[i]==s1[i+2] && s1[i]==s1[i+3] && s1[i]==s1[i+4] && s1[i]==s1[i+5] && s1[i]==s1[i+6]){
		t++;
	}
	
}
if(t>=1){
	cout <<"YES"<<endl;
}
else{
	cout <<"NO"<<endl;
}


	return 0;
}
