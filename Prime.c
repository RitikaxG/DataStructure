#include<stdio.h>
//int Prime(int num);
//int PrimePro(int num);
int PrimeProMax(int num);
int main(){
int num;
printf("Enter a number:");
scanf("%d",&num);
int prime=PrimeProMax(num);
if(prime==1)
printf("%d is a prime number.\n",num);
else
printf("%d is not a prime number.\n",num);
return 0;
}

//Naive Method
//Time Complexity: O(n)
int Prime(int num){
for(int i=2;i<num;i++){
if(num%i==0)
return 0;
else
return 1;}
}

//Efficient Method
//Time Complexity: O(square_root(n))
//Based on concept that divisor always appears in pairs: 30 : (1,30) ,(2,15), (3,10), (5,6)
//Check from 2 to root n
int PrimePro(int num){
if(num==1)
return 0;
for(int i=2;i*i<=num;i++)
if(num%i==0)
return 0;
return 1;
}

//Most Efficient Method
//Check for n%2==0 & n%3==0 will save many iterations for large n
int PrimeProMax(int num){
if(num==1)
return 0;
if(num==2||num==3)
return 1;
if(num%2==0 || num%3==0)
return 0;
for(int i=5;i*i<=num;i+=6)
if(num%i==0||num%(i+2)==0)
return 0;
return 1;}

