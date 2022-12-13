#include <bits/stdc++.h>
using namespace std;
int main(){
 int a[]={2,-5,4,-6,4,-8,4,100};
 int max=a[0];
 int sum =0;
 for(int i=0;i<8   ;i++){
 	if(a[i]+sum <0){
 		sum =0;
 		
	 }
	 else{
	 	sum =sum+a[i];
	 	
	 }
	 if(sum >=max){
	 	max= sum;
	 }
	
	 
 }
cout <<max <<endl;
	return 0;
}
