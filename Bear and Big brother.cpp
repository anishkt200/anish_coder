#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b;
	cin >>a >>b ;
	int l=a;
	int m=a;
	
	int k=b;
	while(l<=k){
		a++;
		l=l*3;
		k=k*2;
	 ;
	}
	cout <<a-m<<endl;
	return 0;
}
