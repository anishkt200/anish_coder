#
#include <iostream>
using namespace std;
    int linearsearch(int n,int array[],int key){
        for(int i=0;i<n;i++){
            if(array[i]==key){
                return i;
            }

        }
        return -1;
    }
int main(){
    int n;
    cin >>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin >>array[i];


    }
    cout << linearsearch(n,array[n],key) <<endl;
    return 0;
}

