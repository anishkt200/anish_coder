#include <bits/stdc++.h>
using namespace std;
int main(){
long long int a,b,c,l,m,n,o,max;

// long long int maxno =INT_MIN;
cin >>l >>m >>n >>o;
if(l>=m && l>=o &&l>=n ){
	max=l;
	a=max-m ;
	b=max-n ;
	c=max- o;
}
else if(m>=l &&m>=n&&m>=o ){
	max=m;
	a=max- n;
	b=max-l ;
	c=max-o ;
}
else if(n>=m && n>=l && n>=o){
	max=n;
	a=max- l;
	b=max-m ;
	c=max- o;
}
else{
	max =o;
	a=max-l ;
	b=max-m ;
	c=max- n;
}
cout <<a <<" " <<b << " " <<c <<endl;

	return 0;
}
