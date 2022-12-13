#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here

	int t,n;
cin >>t;
	for(int i=1;i<=t;i++){

	cin >>n;
	int c=n;
int b;
int sum=0;
		while(n!=0){
		b=	n%10;
		n=n/10;
sum=sum*10 +b;
		}
		
if(sum==c){
	cout << "wins" <<endl;
}
else{
	cout << "loses"<<endl;
}
}
	return 0;
}
