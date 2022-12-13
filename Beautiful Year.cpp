#include <bits/stdc++.h>
using namespace std;
int main(){
	
int y;
cin >>y;
int a,b,c,d;
do {
	y++;
	  a=(y)%10;
  b=((y-a)%100)/10;
  c=((y-(10*b)-a)%1000)/100;
  d=(y)/1000;
// cout <<a <<b <<c <<d <<endl; 
}
while(a==b || b==c || c==d || a==c ||a==d || b==d);
cout <<y;
	
	return 0;
}
