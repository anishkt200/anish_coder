#include <bits/stdc++.h>
using namespace std;
int main(){
	
string s1;
cin >>s1;
int l1 =s1.length();
int t=0;

for(int i=0;i< l1;i++){
//	if(s1[i]>=33 &&s1[i]<=126 ){
		if(s1[i]==char('H') ||s1[i]==char('Q')||s1[i]==char('9')){
			t++;
	//	}
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
