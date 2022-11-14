#include <iostream>
using namespace std;
int main() {
    int i=0;
    int sum =0;
    int even=0;

    while(even<=100){
        if(i%2==0){
            sum= sum+i;
            even= even+1;
        }
        i= i+1;
    }
    cout<<"sum of first 100 even numbers is "<<sum<<endl;
}