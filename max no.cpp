#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
	string s;
	cin >> s;
	int sum1 =0;
	int sum;
	for(int i=0;i <s.size();i++){
		if (s[i]>=32){
			sum =1;
		}
		else{
			sum =0;
		}
		sum1 =sum1 + sum;
		
	}
	if(sum1 >= 1/2*(s.length()){
		transform(s.begin(),s.end(),s.begin(),::tolower);
		cout << s <<endl;
	}
	else{
		transform(s.begin(),s.end(),s.begin(),::toupper);
		cout <<s << endl;
	}
return 0;

}
