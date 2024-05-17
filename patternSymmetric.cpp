#include<iostream>
using namespace std;
class A{
    public:
    int a;
    void pattern(int n){
        for(int i;i<n;i++){
            for(int j=0;j<=i;j++){
                cout<<"*";
            }
            cout<<endl;
        }

    }
    void patternB(int n){
        for(int i=1;i<=n;i++){
            for(int j=0;j<n-i;j++){
                cout<<"*";
            }
            cout<<endl;
        }
    }
};
int main(){
    A aa;
    int n;
    cout<<"Enter rows:\t";
    cin>>n;
    aa.pattern(n);
    aa.patternB(n);
}