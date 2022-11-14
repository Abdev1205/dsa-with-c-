#include <iostream>
using namespace std;
int main() {
    // print sum of first 100 numbers

    int i=1;
    int sum=0;
    while(i<=100){
        sum = i+sum;
        i=i+1;
        
    }
    cout<<"Sum of First 100 numbers is "<<sum<<endl;
}