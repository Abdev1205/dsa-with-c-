#include <iostream>
using namespace std;
int main() {
    int n=4;
    int i =1;
    while(i<=n){
        int j=1;
        char count ='A'+i-1;
        while(j<=i){
            cout<<count;
            j++;

        }
        cout<<endl;
        i++;

    }
}