#include<stdio.h>
//int GCD(int a,int b);
//int EuclidGCD(int a,int b);
int EuclidOpGCD(int a,int b);
int main(){
int a,b;
printf("Enter 1st number:");
scanf("%d",&a);
printf("Enter 2nd number:");
scanf("%d",&b);
int gcd=EuclidOpGCD(a,b);
printf("GCD of %d and %d is %d\n",a,b,gcd);
return 0;
}

//Naive Solution
//Time Complexity: O(min(a,b))
int GCD(int a,int b)
{
int c=(a<b)?a:b;
while(c>0){
if(a%c==0&&b%c==0)
break;
c--;
}
return c;
}

//Euclidean Algorithm (Basic Euclidean)
int EuclidGCD(int a,int b){
while(a!=b){
if(a>b)
a=a-b;
else
b=b-a;
}
return a;
}

//Optimized Euclid Algorithm
int EuclidOpGCD(int a,int b){
if(b==0)
return a;
else
return EuclidOpGCD(b,a%b);
}
