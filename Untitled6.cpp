#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector <int> vect;
	cout << vect.size()<<endl;
	if(vect.empty()){
		cout <<"vector is empty"<<endl;
	}
	
	  vect.push_back(12);
	  vect.push_back(23);
	//  vect[0].swap(vect[1]);
	  for(int i=0;i<vect.size();i++){
	  	cout <<vect[i] <<endl;
	  }
	  return 0;
 
}
