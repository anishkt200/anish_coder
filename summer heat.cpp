#include<iostream>
#define ll long long int
using namespace std;
int main(){
	int t;
	int h = INT_MAX;
	cin >>t;
	for(int i=1;i<=t;i++){
		ll N,M;
		cin >>N >>M;
		int array[N];
		ll arr[M];
		for(ll j=0;j<N;j++){
			cin >>array[j];
			
		}
		for( ll k=0;k<M;k++){
			cin >>arr[k];
			
			
				int b=arr[k];
				int e=arr[k];
				int c;
				int d;
				while(array[b-1]!=1 && b>=1){
					b--;
					
				}
				if(b>=1){
				
				c=arr[k]-b;
			}
		else{
				d=h;
			}
					while(array[e-1]!=2 && e<=N){
					e++;
					
				}
				if(e<=N){
				
				d=e-arr[k];
			}
			else{
				d=h;
		}


			 if(c>d ){
					cout << d <<" ";
				}
					else if(b<1 && e>N ){
					cout <<"-1 ";
				}
				else if(c<d){
					cout <<c <<" ";
				}
				if(c==d){
					cout <<c;
				}
				
				
			//}
				
			}
				cout << endl;
			
		}
	
	
	return 0;
}
