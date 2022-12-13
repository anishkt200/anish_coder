#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main()
{
vector <int> vect;
int n;
	for(int i=0;i<5 ;i++){
		cin >>n ;
		vect.push_back(n);
		
	}
	sort(vect.begin(),vect.end());
	for(int i=0;i<5 ;i++){
	cout << vect[i] <<" ";
		
	}
	  return 0;
 
}
