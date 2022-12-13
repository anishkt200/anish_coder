#include <iostream>
#include <algorithm>
#include<string>
using namespace std;
int main(){
 string str ="ajddghcdnhdndjHSXHFXSVGJSGCDNCDGwdvsb";
 transform(str.begin(),str.end(),str.begin(),::toupper);
 cout <<str<<endl;
 transform(str.begin(),str.end(),str.begin(),::tolower);

cout <<str ;
	return 0;
}
