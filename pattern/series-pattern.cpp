#include <iostream>
using namespace std;
int main() {
    int count =1;
    int n=3;
    int i =1;
    while(i<=n){
        int z= 1;
        while(z<=n){
            cout<<count;
            count=count+1;
            z++;
        }
        cout<<endl;
        
        i++;
    }
}