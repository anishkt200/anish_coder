#include <bits/stdc++.h>
using namespace std;
int main(){
 int a[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
 int l1 =20;
 int h=0;
 int target =16;
 int l= l1-1;
 //int mid =(h+l)/2;
 int ans =-1;
 while(h<=l){
 	int mid =(h+l)/2;
 	if(a[mid]==target){
 	ans =mid;
 	break;
	 }
	 else if(a[mid]<target){
	 	h=mid+1;
	 }
	 else{
	 	l=mid-1;
	 }
	// \
	'/ cout << h <<" "<<l <<endl;
 }
 cout << ans <<endl;
	return 0;
}
