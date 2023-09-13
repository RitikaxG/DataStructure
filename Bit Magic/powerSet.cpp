// i/p : s="abc" n=3 
// o/p : " " a b ab c ac bc abc
#include<iostream>
#include<string>
using namespace std;
void printPowerSet(string str);
int main(){
    string str;
    cout<<"Enter a string:";
    cin>>str;
    cout<<"Subsets of "<<str<<" is ";
    printPowerSet(str);
    return 0;
}

//Time complexity: theta(2^n * n )
void printPowerSet(string str){
    int n=str.length();
    int powerSize = (1<<n); //2^n
    for(int i=0;i<powerSize;i++){
        for(int j=0;j<n;j++)
        if((i & (1<<j))!=0)
        cout<<str[j];
        cout<<"\n";
    }
}