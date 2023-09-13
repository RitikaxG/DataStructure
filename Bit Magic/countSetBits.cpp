// i/p: n=5     n=5
// o/p:2        101
// i/p: n=7     n=7
// o/p:3        111
#include<iostream>
using namespace std;

int countSetBits(int n);
int brianKerningum(int n);
int LookTableSoln(int n);
void initialize();
int tbl[256];

int main(){
    int noOfBits;
    int n;
    cout<<"Enter value for n: ";
    cin>>n;
    initialize();
    noOfBits= LookTableSoln(n);
    cout<<"No of set bits in "<<n<<" is "<<noOfBits;
    return 0;
}
//Naive Solution
//Time Complexity: theta(d)
int countSetBits(int n){
    int res=0;
    while(n>0){
        // if(n%2!=0)
        //     res++;
        //Check if MSB is odd
        res=res+(n&1);
        //right shift n by 1
        n=n/2;
    }
    return res;
}

//Brian Kerningum's Algorithm: Traverse through only the set bits
//Time Complexity: theta(set bits)
int brianKerningum(int n){
    int res=0;
    while(n>0){
     n=n&(n-1); //Make the last set bit as zero
     res++;   
    }
    return res;
}

//Look Table Solution
//Time Complexity: O(1) with preprocessing
//Preprocessing
void initialize(){
    tbl[0]=0;
    for(int i=0;i<256;i++)
    tbl[i]=(i&1)+tbl[i/2];
}

int LookTableSoln(int n){
    return tbl[n&255] + tbl[(n>>8) & 255] + tbl[(n >> 16) & 255] + tbl[(n >> 24)];
}
