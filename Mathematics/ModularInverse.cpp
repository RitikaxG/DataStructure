//{ Driver Code Starts
//Initial Template for C++

#include<iostream>
using namespace std;


// } Driver Code Ends
//User function Template for C++
//
class Solution{
    public:
    //Complete this function
    int modInverse(int a, int m)
    {
        //i is initialized with the value of m because the modular inverse is sought within the range of integers from 1 to m - 1 (inclusive). 
        int i=m;
        while(i>0){
            if(((a%m)*(i%m))%m==1){
            return i;
            break;
            }
            i--;
        }
        return -1;
        //Your code here
    }
};

//{ Driver Code Starts.

int main()
{
	int T;
	
	//taking testcases
	cin>>T;
	while(T--){
		int a,m;
		
		//taking input a and m
		cin>>a>>m;
		Solution ob;
		//calling function modInverse()
		cout << ob.modInverse(a, m)<<endl;
	}
    return 0;
}