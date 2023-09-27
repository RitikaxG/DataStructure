// i/p: n=5 , k=1 , n =00...0101 (check if kth bit is 1)
// o/p: Yes
// i/p: n=8 , k=2 , n= 00...1000
// o/p:No
#include<iostream>
using namespace std;
void isKthSet(int n,int k);
void isKthSet2(int n,int k);
void isKthPro(int n,int k);
void isKthPro2(int n,int k);
int main(){
    int n,k;
    cout<<"Enter value for n:";
    cin>>n;
    cout<<"Enter value for k:";
    cin>>k;
    isKthPro2(n,k);
    return 0;
}

//Naive Solution
//Time Complexity: theta(K)
void isKthSet(int n,int k){
    //Compute 2^K-1
    int x=1;
    for(int i=0;i<(k-1);i++)
        x=x*2;
        if((x&n)!=0)
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
}
//Alternate Naive Solution
//Time Complexity: theta(K)
void isKthSet2(int n,int k){
    //Compute floor(n/2^K-1)
    for(int i=0;i<(k-1);i++)
    n=n/2;
    if((n&1)!=0)
    cout<<"Yes";
    else
    cout<<"No";
}

void isKthPro(int n,int k){
    int x;
    for(int i=0;i<(k-1);i++)
    x= 1<<(k-1);
    if((n&x)!=0)
    cout<<"Yes";
    else
    cout<<"No";
}

//right shift n by k-1, we get the last bit as 1 if the Kth bit is set else 0
void isKthPro2(int n,int k){
    int x;
    for(int i=0;i<(k-1);i++)
    x= n>>(k-1);
    if((x&1)!=0)
    cout<<"Yes";
    else
    cout<<"No";
}
//Time Complexity: O(1)
//Auxiliary Space: O(1)

void isKthSetProMax(int n, int k) {
    if (k <= 0 || k > sizeof(int) * 8) {
        cout << "Invalid value of k";
    } else if (n & (1 << (k - 1)) == 0) {
        cout << "SET";
    } else {
        cout << "NOT SET";
    }
}

void isKthSetProMax2(int n, int k) {
    if (k <= 0 || k > sizeof(int) * 8) {
        cout << "Invalid value of k";
    } else if (((n >> (k - 1)) & 1) == 0) {
        cout << "SET";
    } else {
        cout << "NOT SET";
    }
}





