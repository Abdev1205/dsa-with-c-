#include <iostream>
using namespace std;
int main() {
    int n=4;
    int i=1;
    
    while(i<=n){
        int j =1;
        int count =i;
        while(j<=n){
            cout<<'A'+count;
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
}