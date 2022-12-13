#include <bits/stdc++.h>
using namespace std;
int main(){
 int n;
 cin >>n;
 int a[n],c[10],b[n];
 for(int i=0;i<n;i++){
 	cin >>a[i];
 	
 }
 for(int i=0;i <=9;i++){
 	c[i]=0;
 	
 }
 for(int j=0;j<n;j++){
 int i=a[j];
 c[i]++;
 }
 for(int i=0;i<=9;i++){
 	for(int j=0;j<c[i];j++){
 		b[j]=i;
 		cout <<b[j]<< " ";
	 }
 }

	return 0;
}
