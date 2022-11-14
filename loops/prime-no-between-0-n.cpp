#include <iostream>
using namespace std;
int main() {
    int n;
    int i=0;
    cout<<"Enter Upper limit for prime numbers"<<endl;
    cin>>n;

    while(i<n){
        if(i%2!=0){
            cout<<i<<" is  Prime number"<<endl;
        }
        
        i++;
    }
}