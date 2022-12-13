#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin >>t;

for(int i=1;i<=t;i++){
	char a;
 cin >>a; 
 if(a==char('B') ||a==char('b')){
 	cout <<"BattleShip"<<endl;
 }
 else if(a==char('c')||a==char('C')){
 	cout << "Cruiser"<<endl;
 }
 else if(a==char('D')||a==char('d')){
 	cout <<"Destroyer"<<endl;
 }
 else if(a==char('F') || a==char('f')){
 	cout <<"Frigate"<<endl;
 }
}

	return 0;
}
