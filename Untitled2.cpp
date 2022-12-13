#include <iostream>
using namespace std;

int main() {
	// your code goes here

	int t,n;
	cin >>t;
	for(int i=1;i<=t;i++){
	    cin >>n;
	    	int x=1;
	    for(int j=1;j<=n;j++){
	      x=x*j;  
	    }
	    cout << x <<endl;
	}
	return 0;
}
