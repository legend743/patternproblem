#include<iostream>
using namespace std;
 void pattern(int a){
        for(int i=0;i<a;i++){
            for(int j=0;j<=i;j++){
                cout<<j;
            }
            for(int j=0;j<=(2*a)-1;j++){
                cout<<" ";
                
            }
            for(int j=0;j<=i;j++){
                cout<<j;
                
            }
            cout<<endl;

        }

    }

int main(){
    int a;
    cout<<"enter the number a";
    cin>>a;

   pattern(a);

}