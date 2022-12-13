#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >>n;
	int sum1=0;
	for(int i=1;i<=n;i++){
		int array[3];
	//	int sum1=0;
	for(int j=0; j<3 ;j++){
	
		cin >> array[j];
		}
		
	int	sum2=array[0] + array[1] +array[2];
	int sum;
		if(sum2 >=2){
			sum= 1;
			
		}
		else{
			sum =0;
		}
		sum1=sum1+sum;
		
	}
	cout << sum1 <<endl;
	
	return 0;
	
}
