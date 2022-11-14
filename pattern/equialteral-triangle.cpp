#include <iostream>
using namespace std;
int main() {
    int n=7;
    int i=1;
    while(i<=n){
        
        int space=n-i;
        while(space){
            cout<<" ";
            space--;
            
            

        }
        int k=1;
        while(k<=4){
                cout<<i;
                i++;
                k++;
            }
            int d=1;
        while(d<=3){
                cout<<i;
                i++;
                k++;
            }
            int j=1;
        int space2=n-i-1;
        while(space2){
            cout<<" ";
            space--;
            
            

        }
        
        cout<<endl;
        i++;
    }
}