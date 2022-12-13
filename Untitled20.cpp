#include <bits/stdc++.h>
using namespace std;

int main(){
 
int t,x;
int sum=1;
string s1 ="";

int n;
int j=9;
cin >>t;

	for(int i=1;i<=t;i++){
		cin >>x;
	int a=x	;
		
		
		if(x>=1 && x<=9){
			cout << x <<endl;
		}
		else if(x>=10 &&x <=45){
			//int n=x-j;
			int d=9;
		//	x=x-j;
	while(x>=0){
		j--;
	if(j<=x){
		n=j;
		
	}
	else{
		n =x;
	}
		d=d+(pow(10,sum)*n);
		x=x-n;
		sum++;
	//	j--;
	
		
		
		
	}
	cout << d <<endl;
		}
			else{
				cout <<"-1"<<endl;
			}
			
		}
	
		
 
 
 
	
 
	return 0;
}
