//Print all divisors of a number
#include<stdio.h>
void Divisors(int n);
void DivisorsPro(int n);
void DivisorsProMax(int n);
int main(){
int n;
printf("Enter a number:");
scanf("%d",&n);
DivisorsProMax(n);
return 0;
}


//Naive Solution
//Time Complexity: theta(n)
//Auxillary Space: theta(1)
void Divisors(int n){
for(int i=1;i<=n;i++)
if(n%i==0)
printf("%d\t",i);
}

//Efficient Method: Prints all divisors but not in order
void DivisorsPro(int n){
for(int i=1;i*i<=n;i++){
if(n%i==0)
{
printf("%d\t",i);
if(i!=(n/i))
printf("%d\t",n/i);
}
}
}

//More Efficient Method:1st loop prints all the divisors from 1(inclusive) to square_root(n) (exclusive)
//2nd loop: Prints all divisors from square_root(n) (inclusive) to 1(inclusive)
//Time Complexity: theta(square_root(n))
//Auxillary space: theta(1)
void DivisorsProMax(int n){
int i;
for(i=1;i*i<n;i++){
if(n%i==0)
printf("%d\t",i);
}
for(;i>=1;i--)
{
if(n%i==0)
printf("%d\t",n/i);
}
} 
