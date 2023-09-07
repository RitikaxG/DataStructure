#include<iostream>
#include<vector>
#include<bitset>
using namespace std;
class Solution{
    public:
 
    
    bool is_prime(int N){
        if(N<=1)
        return false;
        if(N==2 || N==3)
        return true;
        if(N%2==0 || N%3==0)
        return false;
        for(int i=5;i*i<=N;i+=6){
            if(N%i==0 || N%(i+2)==0)
            return false;
        }
        return true;
    }

    int exactly3Divisors(int N)
    {
        int count=0;
        for(int i=2;i*i<=N;i++){
    // a number has exactly three divisors if and only if it is a perfect square of a prime 
    // number.. This is because a number with exactly three divisors will have the form p^2,
    // where p is a prime number. 
    
    
    //% is used to calculate the remainder when i is divided by itself (i % i). If the remainder is zero, it means that i is evenly divisible by itself, indicating that it's an integer.
        if(is_prime(i) && (i%i)%1==0){ //check if its prime and if its square is a whole number
                count++;
            }
        }
        return count;
        //Your code here
    }
};
int main() {
    Solution solution;
    int N = 100; 
    int result = solution.exactly3Divisors(N);

    cout << "Numbers less than or equal to " << N << " with exactly 3 divisors: " << result << endl;

    return 0;
}
