// i/p : arr[]: {3,4,3,4,5,4,4,6,7,7}
// o/p : 5 6
// i/p : arr[] : {1,3,2,3,3,1}
// o/p : 2 3
#include<iostream>
using namespace std;
void oddOccurring(int arr[],int n);
void oddOccurringPro(int arr[],int n);
int main(){
    int n,i;
    cout<<"Enter size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter elements in array:";
    for(i=0;i<n;i++)
    cin>>arr[i];
    cout<<"Elements occurring odd times are:";
    oddOccurringPro(arr,n);
    return 0;
}

//Naive Solution
//Time Complexity: theta(n^2)
//Auxillary Space: O(n)
void oddOccurring(int arr[],int n){
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j])
            count++;
        }
        if(count%2!=0)
        cout<<arr[i]<<" ";
    }
}

//Efficient Solution
//Time complexity: theta(n)
//Auxillary Space: theta(1)
void oddOccurringPro(int arr[], int n){
    int x= arr[0];
    int res1, res2;
    res1=res2=0;
    res1 = res2 = arr[0];
    for(int i=1;i<n;i++)
        x = x ^ arr[i];
    int k = (x & (~(x-1)));
    for(int i=0;i<n;i++){
        if((arr[i] & k) != 0)
        res1 =res1 ^ arr[i];
        else
        res2 = res2 ^ arr[i];
    }
    cout<<res1<<" "<<res2<<" ";
}


