// i/p : arr[] ={4,3,4,4,4,5,5}
// o/p : 3
// i/p : arr[]= {8,7,7,8,8}
// o/p : 8 //only element in array that occur odd no. of times 

#include<iostream>
using namespace std;
int findOdd(int arr[],int n);
int findOddPro(int arr[],int n);
int main(){
    int n,i;
    cout<<"Enter size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter elements in an array:";
    for(i=0;i<n;i++)
    cin>>arr[i];
    cout<<"Only odd occurring number is:"<<findOddPro(arr,n);
    return 0;
}

//Naive Solution
//Time Complexity: O(n^2)
int findOdd(int arr[], int n){
    int i,j;
    for(i=0;i<n;i++){
        int count=0;
        for(j=0;j<n;j++){
            if(arr[i]==arr[j])
            count++;
        }
            if(count%2!=0)
            return arr[i];
    }
    return 0;
}

//Efficient Solution Idea: 
//x ^ 0 = x
//x ^ y = y ^ x
//x ^ (y^z) = (x^y) ^ z
//x ^ x = 0
//Time Complexity : theta(n)
//Auxillary Space : O(1)
int findOddPro(int arr[], int n){
    int i;
    int res=arr[0];
    for(i=1;i<n;i++)
    res = res ^ arr[i];
    return res;
}