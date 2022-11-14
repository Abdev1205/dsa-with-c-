#include <iostream>
using namespace std;
int main() {
    char i;
    cout<<"Enter Character to check whether it is uppercase,lowercase or integer"<<endl;
    cin >>i;
    cout<<endl;

    if(i>='A' && i<='Z'){
        cout<<"Character is Uppercase";
    }
    else if(i>='a' && i<='z'){
        cout<<"Character is Lowercase";
    }
    else if(i>='0' && i<='9'){
        cout<<"Character is Integer";
    }
    else{
        cout<<"Something Went wrong !"<<endl;
    }
}