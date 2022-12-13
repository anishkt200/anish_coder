#include <bits/stdc++.h>
using namespace std;
int main(){
int X=0;
int n,t;
cin >>n;
string str;
	for(int i=0;i<n;i++){
		
		cin >> str;
	if(str=="++X" ||str =="X++"){
		X++;
	}
	else{
		X--;
	}
	}
	cout <<X <<endl;

	return 0;
}
