#include<iostream>
using namespace std;
// n>=0   i/p: n=4  o/p: true
 //       i/p: n=6  o/p: false
bool isPowerOfTwo(int n);
bool isPowerOfTwoPro(int n);
int main(){
    int n;
    cout<<"Enter value for n:";
    cin>>n;
    cout<<isPowerOfTwoPro(n);
    return 0;
}

bool isPowerOfTwo(int n){
    if(n==0)
    return false;
    while(n!=1){
        if(n%2!=0)
        return false;
        n=n/2;
    }
    return true;
}

//Brian Kerningum's Algorithm
bool isPowerOfTwoPro(int n){
    return ((n&(n&(n-1)))==0);
}