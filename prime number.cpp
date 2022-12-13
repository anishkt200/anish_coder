//print prime till 1000;
#include <bits/stdc++.h>
using namespace std;
int isprime(int n){
	//for(int i=2;i<=n;i++){
//	int isDivisible =0;
	for(int j=2;j <n;j++){
		if(n%j==0){
			return 0;
		}
	}
	return 1;
	
	
return 1;
}
	
//}
int main(){
int n=100;
for(int i=2;i<=100;i++){
 if(isprime(i)==1){
 	cout <<i <<endl;
 }
}
	return 0;
}
