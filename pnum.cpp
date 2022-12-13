#include <bits/stdc++.h>
using namespace std;
int soe(int n){
	vector <int> arr(n+1,0);
	 for(int i=2;i<=n;i++){
	 	if (arr[i]==0){
		 
		 for(int j=2*i;j<=n;j+=i){
		 	arr[j]=1;
		 }
		 }
	 }
	 for(int i=2;i<=n;i++){
	 	if(arr[i]!=1){
	 		cout <<i <<endl;
		 }
	 }
	 
}
int isprime(int n){

	for(int j=2;j <n;j++){
		if(n%j==0){
			return 0;
		}
	}
	return 1;
	
	
return 1;
}
	

int main(){
int n=100;
/*for(int i=2;i<=100;i++){
 if(isprime(i)==1){
 	cout <<i <<endl;
 }
}*/
soe(100);
	return 0;
}
