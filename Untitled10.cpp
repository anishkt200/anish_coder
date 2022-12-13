#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans=0;
    for(int i=n-1;i>=1;i--){
        int sum=0;
        for(int j=2;j<i;j++){
            if(i%j==0){
                sum++;
            }
            }
             if(sum==0){
            ans++;
        }
     
        } 
    
    cout<<ans<<endl;
  return 0;  
}
