//Sieve of Eratosthenes: Efficient Algorithm to find all Prime numbers <= n
#include<iostream>
#include<vector>
using namespace std;
void Primes(int n);
bool isPrime(int n);
void Sieve(int n);
void SievePro(int n);
void SieveProMax(int n);
int main(){
int num;
cout<<"Enter a number:";
cin>>num;
cout<<"All prime numbers less than "<<num<<" are:";
SieveProMax(num);
return 0;
}
//Naive Solution: Time Complexity = O(n * sqaure_root(n)) = O(n^3/2)
void Primes(int n){
for(int i=2;i<=n;i++)
if(isPrime(i))
cout<<i<<" ";
}

bool isPrime(int n){
if(n==1)
return false;
for(int i=2;i*i<=n;i++)
if(n%i==0)
return false;
return true;
}

//Sieve of Eratosthenes: Initialize value of isPrime[n+1] to True
void Sieve(int n){
vector<bool> isPrime(n+1,true); //Creating a boolean vector, all values in this vector is initialized to true
for(int i=2;i*i<=n;i++){
if(isPrime[i]){ //Will only go inside "if" if 'i' is prime 
for(int j=2*i;j<=n;j=j+i) //Iitialize multiples of prime nos as false. eg: for i=2, Mark 4,6,8...as false(not prime)
isPrime[j]=false;
}
}
for(int i=2;i<=n;i++){
if(isPrime[i])
cout<<i<<" ";
}
}

//Optimized Solution
void SievePro(int n){
    vector<bool> isPrime(n+1,true);
    for(int i=2;i*i<=n;i++){ //Replace 2*i with i*i , i^2 , i^2 +i , i^2 + 2i , Smaller divisors will already be considered in earlier loop
        if(isPrime[i]){
            for(int j=i*i;j<=n;j=j+i)
            isPrime[j]=false;
        }
    }
    for(int i=2;i<=n;i++){
        if(isPrime[i])
        cout<<i<<" ";
    }
}

//Shorter Implementation of Optimized Solution
//Time Complexity: O(n log logn)
void SieveProMax(int n){
    vector<bool> isPrime(n+1,true);
    for(int i=2;i<=n;i++){ //
        if(isPrime[i])
        cout<<i<<" ";
        for(int j=i*i;j<=n;j=j+i){ //When i>square_root(n) inner loop will not run
            isPrime[j]=false;
        }
    }
}

