      #include<iostream>
using namespace std;




int main() {

    int n,a;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            int a=arr[i]/2;
             for(int j=0; j<a; j++){
            cout<<"1";
        }cout<<endl;}
       
        
        else{
            int a=(arr[i]/2)-1;
            cout<<"7";
             for(int j=0; j<a; j++){
            cout<<"1";

        }
        cout<<endl;
    }
    }



return 0;
}
