#include <iostream>
#include<vector>
using namespace std;
long long int power(long long int a,long long int n,long long int mod){
		int ans=1;
		while(n>0){
			if(n%2==1){
				ans=ans*a;
				
			}
			n=n/2;
			a=a*a;
		}
		return ans;
	}
int main() {
	// your code goes here
cout <<power(7,13);



	return 0;
}

