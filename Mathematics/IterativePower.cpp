//Iterative Power: Binary Exponentiation
//Based on concept: 1> Every number can be written as sum of powers of 2(bits in binary representation)
// 2> We can traverse through all bits of number (from LSB to MSB) in O(log n) time.
//Time Complexity: O(log n)
//Auxillary Space: O(1)
#include<iostream>
using namespace std;
int PowerProMax(int n,int x,int m);
int Power(int x,int n);
int main(){
    int x,n,m;
    cout<<"Enter a number:";
    cin>>x;
    cout<<"Enter power to be raised to:";
    cin>>n;
    cout<<"Enter modulo:";
    cin>>m;
    int power=PowerProMax(x,n,m);
    int powers=Power(x,n);
    //cout<<x<<" raised to the power "<<n<<" modulo "<<m<<" is "<<power;
    cout<<x<<" raised to the power "<<n<<" is "<<powers;
    return 0;
}

//To handle large value of power by using modulo
int PowerProMax(int x,int n,int m){
    int power=1;
    x=x%m;
    while(n>0){
        if(n&1) //Check whether n is odd: if(n%2!=0) 
            power=(power*x)%m; //Handle large values of m
        x=(x*x)%m;
        n=n>>1; //same as n=n/2^1
    }
    return power;
}

int Power(int x,int n){
    int power=1;
    while(n>0){
        if(n%2!=0)
            power=power*x;
        x=x*x;
        n=n/2;
    }
    return power;
}


