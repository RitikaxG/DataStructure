#include<stdio.h>
void PrimeFactors(int n);
void PrimeFactorsPro(int n);
void PrimeFactorsProMax(int n);
int isPrime(int n);

int main(){
int num;
printf("Enter a number:");
scanf("%d",&num);
PrimeFactorsProMax(num);
return 0;
}

//Naive Solution
//Time Complexity: O(nlogn)
void PrimeFactors(int n){
int i;
for(i=2;i<n;i++)
{
if(isPrime(i))
{
int x=i;
while(n%x==0)
{
printf("%d\t",i);
x=x*i;
}
}
}
}

int isPrime(int n){
if(n==1)
return 0;
for(int i=2;i*i<=n;i++)
if(n%i==0)
return 0;
else
return 1;
}

//Efficient Solution
void PrimeFactorsPro(int n){
if(n<=1)
return;
for(int i=2;i*i<=n;i++){
while(n%i==0){
printf("%d\t",i);
n=n/i;
}}
if(n>1)
printf("%d\t",n);
}

//More Efficient Solution
//Time Complexity: theta(square_root(n))
void PrimeFactorsProMax(int n){
int i;
if(n<=1)
return ;
while(n%2==0){
printf("2\t");
n=n/2;
}
while(n%3==0){
printf("3\t");
n=n/3;
}
for(i=5;i*i<=n;i+=6){
while(n%i==0){
printf("%d\t",i);
n=n/i;
}
while(n%(i+2)==0){
printf("%d\t",i+2);
n=n/(i+2);
}
}
if(n>3) //when largest prime factor has only one power
printf("%d\t",n);
}

