#include<stdio.h>
//int Factorial(int num);
int Fact(int n);
int main(){
int factorial,num;
printf("Enter a number:");
scanf("%d",&num);
factorial=Fact(num);
printf("Factorial of %d is %d\n",num,factorial);
return 0;
}
//RECURSIVE METHOD :Time Complexity: theta(n) = Auxillary Space
int Factorial(int num){
int fact=1;
if(num==0)
return 1;
return num*Factorial(num-1);
}

//ITERATIVE METHOD: Time Complexity: theta(n), Auxillary Space: Big Oh(n)
int Fact(int n){
int fact=1;
for (int i=2;i<=n;i++)
fact=fact*i;
return fact;
}
