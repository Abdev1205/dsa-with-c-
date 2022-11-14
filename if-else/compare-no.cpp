#include <iostream>
using namespace std;
int main() {
    int a,b;
    cout<<"Enter Your First No"<<endl;
    cin>>a;
    cout<<"Enter Your Second No"<<endl;
    cin>>b;
    
    if(a>b){
        cout<<a<<" is greater than "<<b<<endl;
    }
    else if(a<b){
        cout<<b<<" is greater than "<<a<<endl;
    }
    else{
        cout<<a<<" and "<<b<<" are equal to each other "<<endl;
    }
}