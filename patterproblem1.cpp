#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter  the value\t";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=1;j<=i+1;j++){
            cout<<j;
        }
        cout<<endl;
    }
}