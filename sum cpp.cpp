#include <bits/stdc++.h>
using namespace std;
int main(){
	int t,n;
cin >>t;
for(int i=1;i <=t;i++){
	vector<int> vect;
	for(int j=0;	j<3; j++){
	
	cin >>n;
	vect.push_back(n);
}
sort(vect.begin(),vect.end());
cout <<vect[1]<<endl;
}
	return 0;
}
