
// Expected Time Complexity : O(m)
// Expected Auxilliary Space : O(1)
#include<iostream>
using namespace std;
class Solution{
    public:
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
        return -1
    }
};

int main()
{
	int T;
	
	//taking testcases
	cin>>T;
	while(T--){
		int a,m;
		cin>>a>>m;
		Solution ob;
		cout << ob.modInverse(a, m)<<endl;
	}
    return 0;
}
