#include<iostream>

#define ll long long int
using namespace std;
int main(){
int n;
ll a,b,c,d;
cin >>n;
for(int i=1;i<=n;i++){
	cin >>a >>b >>c >>d;


if(a<=b){
	cout << b <<endl;
}
else{
	if(c<d ){
		cout << "-1" <<endl;
	}
else	if((a-b)%(c-d)==0){
		cout << b +c*((a-b)/(c-d)) <<endl;
	}
	else{
		cout << b +c*(((a-b+c-d)-(a-b)%(c-d))/(c-d)) <<endl;
	}
}
	
}

		return 0;
}
