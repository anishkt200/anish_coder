#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >>n;
	int maxno =INT_MIN;
	long array[n];
	long sum=0;
	for(int i=0;i<n;i++){
		cin >>array[i];
		
	}
	for(int i=0;i<n;i++){
		maxno =max(maxno,array[i]);
	}
	for(int i=0;i<n;i++){
		long  sum1 =maxno - array[i];
		sum=sum1 +sum;
		
	}
	cout <<sum <<endl;
	return 0;
}
