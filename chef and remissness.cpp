#include <iostream>
using namespace std;

int main() {
	// your code goes here

	int t,a,b,c,d;
	cin >>t;
	for(int i=1;i<=t;i++){
cin >>a >>b;
if(a>=b){
	c=a;
}
else{
	c=b;
}
d=a+b;
cout << c <<" "<<d <<endl;
	}
	return 0;
}
