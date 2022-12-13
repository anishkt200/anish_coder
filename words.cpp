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
		if (s[i]>='a'){
			sum =1;
		}
		else{
			sum =0;
		}
		sum1 =sum1 + sum;
		
	}
	float t= (float(s.length()))/2;
	
	
	if(sum1 >=t){
		transform(s.begin(),s.end(),s.begin(),::tolower);
		cout << s <<endl;
	}
	else{
		transform(s.begin(),s.end(),s.begin(),::toupper);
		cout <<s << endl;
	}
	
return 0;

}
