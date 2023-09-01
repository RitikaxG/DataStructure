#include<stdio.h>
int Power(int x,int n);
int PowerPro(int x,int n);
int main(){
int n,x;
printf("Enter a number:");
scanf("%d",&x);
printf("Enter power to be raised:");
scanf("%d",&n);
int power=PowerPro(x,n);
printf("%d raised to the power %d is %d\n",x,n,power);
return 0;
}

//Naive Solution: Time Complexity: theta(n)
int Power(int x,int n){
int pow=1;
for(int i=0;i<n;i++)
pow=pow*x;
return pow;
}

//Efficient(Recursive) Solution
//Based on formula: pow(x,n)={ if(n%2==0)
		// 	          pow(x,n/2) * pow(x,n/2)
	       //               else
	      //                 pow(x,n-1) * x
             //                }
//Time Complexity: T(n) = T(floor(n/2)) + theta(1) = theta(log(n))
//Recursive function calls takes space in the function call stack, Auxillary Space: theta(n)
int PowerPro(int x,int n){
if(n==0)
return 1;
int temp=PowerPro(x,n/2);
temp=temp*temp;
if(n%2==0)
return temp;
else
return temp*x;
}             
